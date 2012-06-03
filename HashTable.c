#include<stdio.h>
#include<malloc.h>

struct record {       // this is the record to be stored ,
	int key;     // key value based on which the hash is found
	int data;   // the data to be stored , in fact this can be any data , including other structures
	struct record *link;
};

struct OHashTable {              // this is the  open hash table , stores the values .
	struct record ** rec ;  // array of records
	int **heads , len ;   // pointers and the length of the hash table(bucket count)
};
void inittable(struct OHashTable *ohash ,int num_bucket) {  // initializes the hash table 
	int i;
	ohash->rec = (struct record **)malloc(sizeof(struct record) * num_bucket);
	//ohash->heads = (int **)malloc(sizeof(int) * num_bucket);
	ohash->len = num_bucket;	
	for(i=0;i<num_bucket;i++) {
		ohash->rec[i] = NULL;
		//ohash->heads[i] = NULL;
	}
}
struct record * CreateNode(int key , int data) {
	struct record *temp = (struct record *)malloc(sizeof(struct record));
	temp->key = key;
	temp->data = data;
	temp->link = NULL;	
	return temp;
};
int ophash(int key , struct OHashTable *ohash) {  //computes the  open hash  using the modulus method 
	return (key%ohash->len);
}
int insert_record(struct OHashTable *ohash, int key , int data) {  // insets an element to the hash table

	struct record *temp = CreateNode(key,data),*tmp;
	int hash = ophash(key,ohash);
	if(ohash->rec[hash] == NULL) {  // This is the first element in the list
		//ohash->head[hash] = temp;
		ohash->rec[hash] = temp;
	} else {                        // it the list already contains the element , then 
		tmp = ohash->rec[hash];
		while(tmp->link!=NULL) {
			tmp = tmp->link;
		}
		tmp->link = temp;
	}
}
struct record * search_table(int key , struct OHashTable *ohash) {        // searches the whole table for the record with key value 
	int hash = ophash(key , ohash);				 // and returns the record
	struct record *temp = ohash->rec[hash];
	if(temp == NULL) {
		printf(" No Such record found\n");
		return NULL;
	} 
	while(temp != NULL ){
		if(temp->key == key ){
			printf(" The record has been found\n");
			return temp;
		}
		temp = temp->link;
	}
	printf(" The record was not found \n");
	return NULL;
}
int delete_record(int key, struct OHashTable *ohash) {
	int hash = ophash(key, ohash);	
	struct record *temp = search_table(key , ohash),*temp1 = ohash->rec[hash];     // suspect
		                                  // computes the hash  
	if(temp == NULL) {                                               // if there is no such record 
		printf(" No such record found \n");
		return 0;
	}
	if(temp1 == temp) {		//if its the first element , then
			ohash->rec[hash] = temp1->link;
			free(temp1);
			return 1;
	}
	while(temp1->link !=temp && temp1 != NULL) {                 //if its not the first element 
 		temp1=temp1->link;
	}	
	if(temp1->link  == temp) {
		temp1->link = temp->link;
		free(temp);
		return 1;
	}
	printf(" Element no found \n");
	return 0;
}

void print_table(struct OHashTable *ohash) {
	int i = 0;
	struct record *temp ;	
	for(i=0;i<ohash->len;i++) {
		temp = ohash->rec[i];
	printf("bucket :%d ",i); 	
	while(temp!=NULL) {
			printf(" [(%d) %d] ",temp->key,temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}


void main(int argc , char **argv) 
{
	struct OHashTable ohash;
	struct record *temp;
	int key, data,choice,buck_num;
	printf(" Enter the number of the buckets :");
	scanf("%d",&buck_num);
	inittable(&ohash,buck_num);        // initialize the table	
	printf( " 1 - insert  2 - delete 3 - view_table  4 - search 5 - exit");
	scanf("%d",&choice);	
	while(1) {
		if(choice == 1) {
			printf(" Enter the key and value:");
			scanf("%d %d",&key,&data);
			insert_record(&ohash,key,data);
			printf("The value is inserted\n");
		} else if(choice == 2) {
			printf(" Enter the key of the record to be deleted :");
			scanf("%d",&key);
			delete_record(key, &ohash);
			printf(" The record is deleted \n");
		} else if(choice == 3) {
			print_table(&ohash);
		} else if(choice == 4) {
			printf("Enter the key of the record to be searched :");
			scanf("%d",&key);
			temp = search_table(key,&ohash);
			printf("Data :%d\n",temp->data);		
		} else {
			break;
		}
		printf("Enter the choice :");
		scanf("%d",&choice);	
	}

			
}	
