#include<stdio.h>
#include<unistd.h>
#include<malloc.h>
#include "queue.c"
#define MAX 100
#define VISITED 1
#define UNVISITED 0
#define INVALID -1
struct node {            // represents the node of the graph   
	//char city[20];  //the name of the city 
	char city;
};
struct arc { 	// represents the arcs of the graph 
     //	int adj;        // adjusent or not 
 	int cost;       // if adjusent and have cost then the cost of the path
};

/*struct graph { // the actual graph 
	struct node nodes[MAX] ; // The nodes of the graph , here its fixed , can change later on
	struct arc arcs[MAX][MAX];      // holds the information about the arcs , whther adjusent or not it adjusent then the value or the cost of the path and all
};*/
struct graph { // the actual graph 
	struct node *nodes ; // The nodes of the graph , here its fixed , can change later on
	struct arc **arcs;      // holds the information about the arcs , whther adjusent or not if adjusent then the value or the cost of the path and all
	int maxnodes;            // maximum number of nodes in the graph
	int *visited;
};
void initgraphF(struct graph* gr) {  // initializes the graph with the data from the file
	/* format of the file
		5                                               // number of nodes
		africa atlandica america india switzerland      // the names of the cities
		20 5 1 22 0                                     // the adjusency matrix  
		89 6 56 566 23 
		..............
		..............
		..............
	*/
	char datafile[50];	
	FILE *fp;
	int numnodes,i,j,val;
	printf(" Enter the name of the datafile :");
	scanf("%s",datafile);
	fp = fopen(datafile,"r");	
	fscanf(fp,"%d",&numnodes);      // reads the number of nodes from the file
	gr->maxnodes = numnodes;        // sets the field maxnodes
	gr->nodes = (struct node *)malloc(numnodes * sizeof(struct node *)); //initialized the nodes array
	for(i=0;i<numnodes;i++) {
		//fscanf(fp,"%s",gr->nodes[i].city);   // reads the city names in to the nodes
		gr->nodes[i].city = 'A'+i;
	}
	gr->arcs = (struct arc**)malloc(numnodes * sizeof(struct arc *));    // initializes the arcs matrics
	for(i=0;i<numnodes;i++) {
		gr->arcs[i]  = (struct arc*)malloc(numnodes * sizeof(struct arc*));    // initializes each array in the matrics		
	}
	for(i=0;i<numnodes;i++) {
		for(j=0;j<numnodes;j++) {
			fscanf(fp,"%d",&gr->arcs[i][j].cost);   // initialized the cost array 
		}
	}
	gr->visited = (int *)malloc(numnodes * sizeof(int *));     // initializes the visited array
	for(i=0;i<numnodes;i++) {
		gr->visited[i] = UNVISITED;
	}
}

void initgraph(struct graph* gr, int numnodes) {  // initializes the graph 
	/* format of the file
		5                                               // number of nodes
		africa atlandica america india switzerland      // the names of the cities
		20 5 1 22 0                                     // the adjusency matrix  
		89 6 56 566 23 
		..............
		..............
		..............
	*/
	int i,j,val;
	     
	gr->maxnodes = numnodes;        // sets the field maxnodes
	gr->nodes = (struct node *)malloc(numnodes * sizeof(struct node *)); //initialized the nodes array
	for(i=0;i<numnodes;i++) {
		//fscanf(fp,"%s",gr->nodes[i].city);   // reads the city names in to the nodes
		gr->nodes[i].city = 'A'+i;
	}
	gr->arcs = (struct arc**)malloc(numnodes * sizeof(struct arc *));    // initializes the arcs matrics
	for(i=0;i<numnodes;i++) {
		gr->arcs[i]  = (struct arc*)malloc(numnodes * sizeof(struct arc*));    // initializes each array in the matrics		
	}
	for(i=0;i<numnodes;i++) {
		for(j=0;j<numnodes;j++) {
			gr->arcs[i][j].cost=-1;   // initialized the cost array to the default value
		}
	}
	gr->visited = (int *)malloc(numnodes * sizeof(int *));     // initializes the visited array
	for(i=0;i<numnodes;i++) {
		gr->visited[i] = UNVISITED;
	}
}


void printgraph(struct graph* gr) {                 //prints out the entire graph
	int i,j;
	printf("The number of nodes :%d\n",gr->maxnodes);
	printf(" The cities :(Automaticaly Assigned Names) ");			
	for(i=0;i<gr->maxnodes;i++) {
		printf(" %c ",gr->nodes[i].city);
	}
	printf("\n");
	printf(" The adjusency matrix :\n");
	printf("     ");	
	for(i=0;i<gr->maxnodes;i++) {
		printf("   %c  ",gr->nodes[i].city);
	}
	printf("\n");	
	for(i=0;i<gr->maxnodes;i++) {
		printf("  %c  ",gr->nodes[i].city);		
		for(j=0;j<gr->maxnodes;j++) {
			printf("%5d",gr->arcs[i][j].cost);
		}
		printf("\n");
	}
	printf("\n");
}
void __dfs__(struct graph* gr,int node) {
	int i;	
	gr->visited[node] = VISITED;
	printf("  %c  ",gr->nodes[node].city);
	for(i=0;i<gr->maxnodes;i++) {
		if(gr->arcs[node][i].cost != INVALID) {     //if not invalid
			if(gr->visited[i] == UNVISITED) {  // if unvisited
				__dfs__(gr,i);         // call recureivly
			}
		}
	}
}

void dfs(struct graph*gr) {  // performs the dfs
	int i;
	for(i=0;i<gr->maxnodes;i++) {
		if(gr->visited[i] == UNVISITED)
				__dfs__(gr,i);
	}
	for(i=0;i<gr->maxnodes;i++)
		gr->visited[i]=UNVISITED;
}
		
void __bfs__(struct graph *gr,int node) {      // performs the breadth first search
	struct Queue queue;
	int i;	
	initqueue(&queue,20);                     // initialized the queue
	int nodex, nodey;                      // two temporary nodes
	gr->visited[node] = VISITED;
	printf("   %c   " , gr->nodes[node].city);
	enqueue(&queue,node);                 // enqueues that node
	while( ! is_empty(&queue) ) {         // while the queue is not empty
		nodex = dequeue(&queue);
		for(i=0;i<gr->maxnodes;i++) {
			if(gr->arcs[nodex][i].cost != INVALID && gr->visited[i]==UNVISITED){   // if there is an arc from node to node i and node i is unvisited , the
				gr->visited[i] = VISITED;
				printf("   %c   ",gr->nodes[i].city);
				enqueue(&queue,i);
			}
		}
	}
}
void bfs(struct graph* gr) {      // perfoms the real breadth first search
	int i;
	for(i=0;i<gr->maxnodes;i++) {
		if(gr->visited[i] == UNVISITED) {
			__bfs__(gr,i);        // breadth first search
		}
	}
	for(i=0;i<gr->maxnodes;i++) {
		gr->visited[i] = UNVISITED;
	}
}

void insertarc(struct graph* gr) {  // inserts an arc with the given cost
	int a,b,cost;
	printf(" Enter the arc cordinates and cost a b cost(non-negative) : ");
	scanf("%d %d %d",&a,&b,&cost);   
	gr->arcs[a][b].cost = cost;             // inserts the cost , for simplicity no validation is added
}
void deletearc(struct graph* gr) {   // deletes an arc
	int a, b;
	printf(" Enter the arc to be deleted [a b]:");
	scanf("%d %d",&a,&b);
	gr->arcs[a][b].cost=-1;                   //delets the arc
}
int main(int argc , char** argv) {
	int choice,numnodes;
	struct graph gr;
	printf(" Enter the number of nodes in the graph:");
	scanf("%d",&numnodes);
	initgraph(&gr,numnodes);
	printf("1 - insert arc  2 - delete arc  3 - depth first search 4 - breadth first search 5 - view the current graph state 6 - initialize from file 7 - exit\n");
	scanf("%d",&choice);
	while(choice != 7) {   // main loop
		if(choice == 1) {
			insertarc(&gr);
		} else if(choice == 2) {
			deletearc(&gr);
		} else if(choice == 3) {
			printf(" Depth First Search :  ");
			dfs(&gr);
			printf("\n");
		} else if(choice == 4) {
			printf(" Breadth First Search : ");
			bfs(&gr);
			printf("\n");
		} else if(choice == 5) {
			printgraph(&gr);
		} else if(choice == 6) {
			initgraphF(&gr);
		} else if(choice == 7) {
			break;
		} else { 
		    //no op
		}			
		printf(" Enter the operation to be performed :");
		scanf("%d",&choice);
	}
	return 0;
}

	
