#include<stdio.h>
#include<malloc.h>

struct node {   // an node structure
	int data;
	struct node *left, *right;
};

struct BTree {    // The binary tree structure
	struct node *root;
};

void initialize(struct BTree *bt) {  // initializes the binary search tree
	bt->root = NULL;
}
struct node *CreateNode(int data) { //creates the node 
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}	

void insert(struct BTree *bt , int data) {  // inserts the data in the tree;
	struct node *parent, *temp = bt->root;
	if(bt->root == NULL) {
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;	
		temp->left = temp->right = NULL;
		bt->root = temp;
	}
	while(1) {
		parent = temp;
		if(data < temp ->data) {
			temp = temp->left;
			if(temp == NULL) {  //suitable position for inserting
				parent->left = CreateNode(data);
				return;
			}
		} else {
			temp = temp->right;
			if(temp == NULL ) {
				parent->right = CreateNode(data);
				return;
			}
		}
	}
}

void CrtNode(int data, struct node **nd) {
	(*nd)  =  (struct node*)malloc(sizeof(struct node));	
	(*nd)->data = data;
	(*nd)->left=NULL;
	(*nd)->right = NULL;
	
}
struct node * search(struct node *root,int data ,struct node **parent) {   //searches for an element
	struct node *temp = root;	
	if(root == NULL) {
		(*parent) = NULL;
		return NULL;
	}
	(*parent) = NULL;	
	while(temp != NULL ) {
		
		//printf("%d\n",parent->data);		
		if(temp->data == data) {
			return temp;
		}
		if(data < temp->data)
			temp = temp->left;
		else 
			temp = temp->right;
		(*parent) = temp;
	}
	parent = NULL;
	return NULL;
}
void inorder(struct node *root) {
	if(root == NULL) 
		return;
	inorder(root->left);
	printf(" %d ", root->data);
	inorder(root->right);
}

void preorder(struct node *root) {
	if(root == NULL)
		return;
		
	printf(" %d ", root->data);	
	preorder(root->left);
	preorder(root->right);
	
}

void main() {
	struct BTree bt;
	struct node *parent;
	int i;
	initialize(&bt);
	for(i=20;i>0;i--) {
		insert(&bt,i);
	}
	inorder(bt.root);
	printf(" Enter the emement to be searched :");
	scanf("%d",&i);
	if(search(bt.root,i,&parent) == NULL)
		printf(" Element found \n");
	else 
		printf(" Element not found\n");
	printf("\n@@@ %d @@@ \n", parent->data);
	//preorder(bt.root);*/	
	CrtNode(5,&parent);
	printf(" %d ", parent->data);
}





