#include<stdio.h>
#include<malloc.h>

#define MAX_NODES 100
#define BIG 1000
int arcs[MAX_NODES][MAX_NODES],U[MAX_NODES],V[MAX_NODES],tlen;
int numnodes;
struct edge {
	int node1,node2;
} T[MAX_NODES];

struct edge * find_min(int ulen) {
	int i,min = BIG,j;
	struct edge *edg = (struct edge*)malloc(sizeof(struct edge));
	for(i=0;i<ulen;i++) {
		for(j=0;j<numnodes;j++) {
			if(arcs[U[i]][j] < min && V[j] != -1 && arcs[U[i]][j] != -1){
				min = arcs[U[i]][j];				
				edg->node1 = U[i];
				edg->node2 = j;
			}
		}
	}
	if(min == BIG) {
		return NULL;
	} else {
		return edg;
	}
}

		
void prims() {
	int ulen=0,vlen = 0;      //variables to manage the lengths of each of the array u , u-v and t
	int i;
	struct edge*edg = NULL;	
	U[ulen++] = 0;                     // spanning tree is constructed from the node numbered 0
	V[0] = -1;                         // node zero does not exist in V because its already in the U
	for(i=1;i<numnodes;i++) {          // fills the remaining elements to the V array
		V[i] = i;
	}
	while(ulen != numnodes ) {        // this is the exiting condition
		edg = find_min(ulen);
		if(edg == NULL) {
			printf( " There are edges which are unreachable form other nodes \n");
			break;
		}
		U[ulen++] = edg->node2;
		V[edg->node2] = -1;
		T[tlen].node1 = edg->node1;
		T[tlen].node2 = edg->node2;
		tlen++;
	}
}

int main(int argc, char** argv) {
	int i , j;	
	scanf("%d",&numnodes);
	for(i=0;i<numnodes;i++) {
		for(j=0;j<numnodes;j++) {
			scanf("%d",&arcs[i][j]);
		}
	}
	prims();                            // invokes the prims algorithm
	printf(" The minimum spanning tree edges \n");	
	for(i=0;i<tlen;i++) {
		printf(" %d --> %d ",T[i].node1,T[i].node2);
	}
	printf("\n");
	return 0;
}

		
