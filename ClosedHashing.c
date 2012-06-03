/* Implements the closed hashing */
#include<stdio.h>
#include<malloc.h>

struct record {             // it is this record that is stored in the hash table 
	int key;           // hashing is based on this key 
	int data;         //  this can be any complex datastrucures that stores the actual data , realworld data
};

struct CHashTable {	              // The closed hash table 
	struct record **recs;        // stores the records 
	int  *status;               // stores the status , whether the bucket is filled , was deleted , or is empty 
	int  num_bucket;           // number of buckets
};
void initialize(struct CHashTable *chash , int num_bucket) {  // initializes the hash table
	int i;
	chash->recs = (struct record **) malloc(sizeof(struct record) * num_bucket);
	chash->status = (int *)malloc(sizeof(int) * num_bucket);
	chash->num_bucket = num_bucket;
	for(i=0;i<num_bucket;i++) { // initializes all the status elements to empty code
		chash->status[i] = 0;
	}
}
int hash(int key,int bucket_len) { // returnes the hash 
	return (key%bucket_len);
}
struct record * CreateNode(int key , int data) {  // creates and returns an record 
	struct record * temp = (struct record *) malloc( sizeof(struct record) );
	temp->key = key;
	temp->data = data;
	return temp;
}
int insert(int key, int data, struct CHashTable *chash) { // inserts an element to the hash table
	int i;
	struct record * temp = CreateNode(key, data);		
	int clhash = hash(key,chash->num_bucket);        // computes the hash
	i=0;
	while( i < chash->num_bucket && chash->status[(clhash+i)%chash->num_bucket]==1 )  {  // searches for an place where element can be inserted  
		i++;
	
		
	}
	if(i == chash->num_bucket) {          // hash table is complete
  		printf(" There is no room to insert the emement \n");
		return -1;
	} else {     // the element is inserted 
		chash->recs[clhash+i] = temp;
		chash->status[clhash+i]=1;          // status flag changed to set mode
	}
	return clhash;
}

int search(int key, struct CHashTable *chash) {  // searches the hash table for an particular value
	int clhash = hash(key , chash->num_bucket); // computes the hash 
	int i=0;
	while(chash->status[(clhash+i)%chash->num_bucket] !=0 && i < chash->num_bucket) {
		if(chash->status[(clhash+i)% chash->num_bucket] == 0){
			printf("There is no such element \n");
			return -1;
		} else if(chash->status[(clhash+i)%chash->num_bucket] == 1) {
			if(chash->recs[(clhash+i)%chash->num_bucket]->key = key) {
				printf( " Element found at location :%d\n", (clhash+i)%chash->num_bucket);
				return (clhash+i)%chash->num_bucket;
			}
		} else {
			i++;
		
		}
	}
	printf(" There is no such element \n");
	return -1;
}
void display(struct CHashTable *chash) {  // prints out the hash table
	int i;	
	for(i =0;i<chash->num_bucket;i++) { 
		if(chash->status[i]!=1) {
			printf("NULL\n");
		} else {
			printf("[(%d] %d]\n", chash->recs[i]->key, chash->recs[i]->data);
		}
	}
	printf("\n");
}
int delete(int key , struct CHashTable *chash) { // deletes an element from hash table
	int result = search(key, chash);
	if(result == -1) {
		printf(" The element is not in the table \n");
	} else {
		chash->recs[result] = NULL;
		chash->status[result] = 2;
	}
}


int main(int argc , char **argv) {
	struct CHashTable chash;
	int num_bucket,i,key, value, choice;
	printf(" Enter the number of buckets :");
	scanf("%d",&num_bucket);
	initialize(&chash , num_bucket);
	printf(" 1 - insert , 2 - delete , 3 - search , 4 -view , 5 -exit \n");
	scanf("%d",&choice);
	while(choice != 5) {
		if(choice == 1) {
			printf(" Enter the key and value :");
			scanf("%d %d", &key, &value);
			insert(key,value,&chash);
		} else if(choice == 2) {
			printf(" Enter the key of the element to be deleted :");
			scanf("%d",&key);
			delete(key , &chash);
			
		} else if(choice == 3) {
			printf("Enter the key to be searched :");
			scanf("%d",&key);
			search(key, &chash);
		} else if(choice == 4) {
			display(&chash);
		} else {
			// nop 
		}
		printf(" Enter the action to be taken :");
		scanf("%d",&choice);
	}
	return 0;
}





			
