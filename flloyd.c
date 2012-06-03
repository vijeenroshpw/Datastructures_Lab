#include<stdio.h>
#include<malloc.h>

#define MAX 1000
#define INF 1000
//cost and short path matricd
int cost[MAX][MAX], least[MAX][MAX];
//maximum jumber of nodes
int maxnodes;

// flloyds algorithm

void flloyd() { 
	int i,j,k;
	printf(" Enter the number of nodes:");
	scanf("%d",&maxnodes);
	printf(" Enter the cost matrice :\n");
	for(i = 0;i<maxnodes;i++) {
		for(j = 0;j<maxnodes;j++) {
			scanf("%d",&cost[i][j]);
			least[i][j] = cost[i][j];     // update the least matrie at the same time
		}
	}
	// makes the path from a elememt to itself zero
	for(i = 0;i<maxnodes;i++) {
		least[i][i] = 0;
	}
	//computes the shortest path
	for(k = 0;k < maxnodes;k++) {
		for(i=0;i<maxnodes;i++) {
			for(j=0;j<maxnodes;j++) {
				if(least[i][k] + least[k][j] < least[i][j]) 
					least[i][j] = least[i][k]  +  least[k][j];
			}
		}
	}
	//prints the least cost matrice
	printf(" The least cost matrice ......\n");
	for(i=0;i<maxnodes;i++) {
		for(j=0;j<maxnodes;j++) {
			printf("  %d  ",least[i][j]);
		}
		printf("\n");
	}
}
// main routine
int main(int argc ,char **argv) {
	flloyd();
	return 0;
}


				

