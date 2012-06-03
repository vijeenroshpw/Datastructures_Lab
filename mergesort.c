#include<stdio.h>
#include<malloc.h>
#define MAX 200

int merge(int x[], int temp[], int lb, int ub) {  // merge routine 
	int mid = (lb+ub)/2;
	int low = lb, high  = mid+1,tmp=0;
	while(low <= mid && high <= ub) {
		if(x[low] < x[high]) {
			temp[tmp++] = x[low++];
		} else {
			temp[tmp++] = x[high++];
		}
	}
	while(low <= mid) {
		temp[tmp++] = x[low++];
	}
	while(high <= ub ) {
		temp[tmp++] = x[high++];
	}
	tmp=0;
	for(mid = lb; mid <= ub; mid++) {  // copies the elements to he original array
		x[mid] = temp[tmp++];
	}
}


void mergesort(int x[] ,int lb,int ub) { // performs the mergesort recursively 
	int mid;
	int temp[MAX];
	if(lb == ub)                     // exit condition
		return;
	mid = (lb + ub)/2;
	mergesort( x, lb, mid);       // recursive call that implements the mergesort
	mergesort(x, mid+1 , ub);
	merge(x, temp, lb, ub);
}


int main(int argc , char ** argv) {
	int len, i,*arr;
	printf(" Enter the lenght of the array:");
	scanf("%d",&len);
	arr = (int *)malloc(sizeof(int) * len);
	printf("Enter %d elements :\n",len);
	for(i=0;i<len;i++) {
		scanf("%d", &arr[i]);
	}
	mergesort(arr, 0,len-1);
	printf(" The array after sorting :");
	for(i=0;i<len;i++) {
		printf(" %d ", arr[i]);
	}
	return 0;
}


