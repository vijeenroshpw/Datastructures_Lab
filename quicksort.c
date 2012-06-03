#include<stdio.h>
#include<malloc.h>



void partition(int x[], int lb, int ub, int *point) {  // does the partition of the array 
	int pivot = x[lb];   // for simplicity the first element is taken as the pivot of the array
	int up = ub, down = lb,temp;
	while( down < up ) { // actualy the termination condition will always be up one past down
		while(x[down] <= pivot && down < ub) {
			down++;
		}
		while(x[up] > pivot) {
			up--;
		}
		if(down < up) { // then swap the elements 
			temp = x[up];
			x[up] = x[down];
			x[down] = temp;
		}
	}
	// finaly shifting the pivot to its original sorted psition
	x[lb] = x[up];
	x[up] = pivot;
	*point = up;
}


void qsort(int x[] , int lb , int ub ) { // does the recursive quick sort 
	int point;
	if(lb >= ub)                     // exit condition
		return;	
	partition(x, lb, ub , &point);
	
	qsort(x,lb, point-1);
	qsort(x,point+1,ub);
}
void display(int x[], int len) { // displays the array 
	int i;
	for(i=0; i<len;i++) {
		printf(" %d " , x[i]);
	}
	printf("\n");
}

int main(int argc, char ** argv) {
	int *arr, len,i;
	printf(" Enter the size of the array :");
	scanf("%d",&len);
	arr = (int *)malloc(sizeof(int) * len);
	printf(" Enter %d elements ....\n",len);
	for(i=0;i<len;i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr,0,len-1);
	printf(" The array after sorting ...........\n");
	for(i=0;i<len;i++) {
		printf(" %d " , arr[i]);
	}
	printf("\n");
}

