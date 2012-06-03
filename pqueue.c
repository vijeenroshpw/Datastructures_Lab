#include<stdio.h>
#include<malloc.h>

#define MAX 10000
void makeheap(int[],int );
void heapsort(int [],int);
void printq(int [],int);
int main(int argc,char **argv) {
	int queue[MAX],n,rear=-1,i,ch;
	int elem;	
	printf(" Enter the maximum number of elements of the queue :");
	scanf("%d",&n);
	printf(" 1: enqueue 2: dequeue 3:print 4:exit");
	scanf("%d",&ch);
	while(ch !=4) {
		switch(ch) {
			case 1:
				if(rear == n-1){
					printf(" The queue is full\n");
					break;
				}
				printf(" Enter the element to be inserted :");
				scanf("%d",&elem);
				queue[++rear] = elem;
				makeheap(queue,rear);
				break;
			case 2:
				if(rear == -1) {
					printf(" The queue is empty \n");
					break;
				}
				rear--;
				break;
			case 3:
				printq(queue,rear);
				break;
			default : 
				printf(" Invalid operation ");
		}
		printf(" Enter the operation to be done :");
		scanf("%d",&ch);
	}
	return 0;
}
// prints the queue
void printq(int arr[],int len) {
	int i;
	for(i=len;i>=0;i--) {
		printf("  %d  ",arr[i]);
	}
	printf("\n");
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
