#include<stdio.h>
#include<malloc.h>
struct Queue {   // holds the queue
	int *que;
	int maxlen, front,rear;
};

void initqueue(struct Queue* queue,int len) {
	queue->maxlen = len;
	queue->que = (int *)malloc(len * sizeof(int *));
	queue->front=queue->rear=-1;
}
int enqueue(struct Queue* queue, int data) {  // enters the element in to the queue
	if(queue->rear==queue->maxlen-1)
		return 0;
	if(queue->rear == -1) {  // this is the first element
		queue->que[++queue->rear]=data;
		queue->front=0;
	} else {
		queue->que[++queue->rear] = data;
	}
	return 1;
}
int  dequeue(struct Queue* queue) { // returns an element from the queue
	int data;	
	if(queue->rear==-1)
		return -1;        // cannot dequeue , queue is empty
	data = queue->que[queue->front];     // stores the data
	if(queue->rear == queue->front)
		queue->rear=queue->front = -1;
	else
		queue->front++;
	return data;
}
int is_empty(struct Queue* queue) {  // checks queue is empty or not
	return (queue->front == -1);
}
void printqueue(struct Queue* queue) {  // prints the queue
	int i;
	if(is_empty(queue))
		printf(" The queue is empty\n");
	else {
		for(i=queue->front;i<=queue->rear;i++) {
			printf(" %d ",queue->que[i]);
		}	
		printf("\n");
	}
}

	
		
/*int main(int argc, char **argv) {
	int i;	
	struct Queue queue;
	initqueue(&queue,20);
	for(i=0;i<20;i++) {
		enqueue(&queue,i);
	}
	printqueue(&queue);
	for(i=0;i<20;i++) {
	printf(" %d ",	dequeue(&queue));
	}
	printqueue(&queue);
	return 0;
}
*/
