#include<stdio.h>
#include<malloc.h>

#define MAX 10000
void makeheap(int[],int );
void heapsort(int [],int);

int main(int argc,char **argv) {
	int array[MAX],n,i;
	printf(" Enter the number of elements in the array :");
	scanf("%d",&n);
	printf(" Enter %d elements :",n);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	makeheap(array,n);
	heapsort(array,n);
	printf(" The list after sorting :");
	for(i = 0;i<n;i++) 
		printf("  %d  ",array[i]);
	printf("\n");
	return 0;

}
//creates heap from the tree
void makeheap(int x[],int n) {
	int i, val,s,f;
	for(i=1;i<n;i++) {
		val = x[i];
		s = i;
		f = (s-1)/2;
		while(s>0 && x[f] < val ){
			x[s] = x[f];
			s = f;
			f  = (s-1)/2;
		}	
		x[s] = val;
	}
}
// heap sort ,sorts the heap
void heapsort(int x[],int n) {
	int i, s, f,ivalue;
	for(i = n-1;i>0;i--) {
		ivalue = x[i];
		x[i] = x[0];
		f = 0;
		if(i==1)
			s = -1;	
		else
			s = 1;
		if(i > 2 && x[2] > x[1] )
			s = 2;
		while(s >= 0 && ivalue < x[s]) {
			x[f] = x[s];
			f = s;
			s = 2*f+1;
			if(s+1 <= i-1 && x[s] < x[s+1])
				s++;
			if(s > i-1)
				s = -1;
		}
		x[f]  = ivalue;
	}
}
