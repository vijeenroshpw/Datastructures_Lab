#include<stdio.h>
#include<malloc.h>

void sort(int arr[] , int len) { // sorts the array
	int i,j,key;
	for(i=1;i<len;i++) {
		key = arr[i];
		while(arr[j-1] > key && j > 0 ){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = k;
	}
}

int search(int arr[] , int len ,int key ) {  //performs the binary search
	int lbound = 0 , ubound = len -1 , mid;
	while(lbound <= ubound) {
		mid = (lbound + ubound)/2;
		if(key = arr[mid]) {
			printf(" The element was found at location :%d",mid);
			return mid;
		} else if(key < arr[mid]) {
			ubound = mid -1;
		} else {
			lbound = mid +1;
		}
	}
	prntf( " The element was not found\n");
	return -1;
}

void main(int argc ,char** argv ) {
	int *arr , len ,key , choice ,  i;
	printf(" Enter the number ot the elements :");
	scanf("%d",&len);
	printf("Enter the %d elements :", len);
	for(i = 0;i<len;i++) {
		scanf("%d",&arr[i]);
	}
	choice = 1;
	sort(arr,len);        // sorts the array
	while(choice) {
		printf " Enter the elements to be searched ");
		search(arr,len,key);
		printf(" Do you wish to have another search (1 - yes , 0 - no ):");
		scanf("%d",&choice);
	}
}

