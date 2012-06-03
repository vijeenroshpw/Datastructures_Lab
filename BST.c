#include<stdio.h>
#include<malloc.h>

struct node {   // the node structure for the tree 
	int data;
	struct node *right , *left;
};

int insert(struct node *root , int data) { // inserts the data into an binary search tree
	struct node *temp;	
	if(root == NULL) {    // an suitable position has been found
		root = (struct node *)malloc(sizeof(struct node)); 
		root->data = data;
		root->left = root->right = NULL;
		printf(" %d \n" ,root->data);
		return 1;	
	} 
	if(data < root->data) {
		insert(root->left,data);
	} else {
		insert(root->right,data);
	}
	
}

void inorder(struct node *root) {  // inorder traversal of the tree 
	if(root == NULL) 
		return;
	inorder(root->left);
	printf(" %d ",root->data);
	inorder(root->right);
}

void preorder(struct node *root) { // post order traversal of the tree 
	if(root == NULL)
		return;
	printf(" %d " , root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root) { // post order traversal
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf(" %d ", root->data);
}

struct node *search(struct node * root , int data, struct node *parent) { // searches for an element , returnes the nodes address aswell as the parents address
	struct node * par,*temp = root;
	while(temp != NULL ) {
		par = temp;           // saves the parent address
		if(temp->data == data) { // the data is been found
			parent = par;    // sets the parent address
			return temp;
		} else if(data < temp->data) {    
			temp=temp->left;
		} else {
			temp = temp->right;
		}
	}
	parent = NULL;
	return NULL;
}

int main(int argc ,char **argv) {
	struct node *root=NULL,*parent;
	int choice;
	int data;
	printf(" I -insert , 2 - Delete , 3 - Search , 4 - view (all traversals) , 5 -exit ");
	scanf("%d", &choice);
	while( choice != 5) {  //main processing loop
		 
			if(choice == 1) {
				printf("Enter the number to be inserted :");
				scanf("%d",&data);
				insert(root,data);
				printf(" The element is succesflly inserted \n");
				printf("root : %d \n", root->data);				
			} else if(choice == 2) {
				printf(" Enter the number to be deleted :");
				scanf("%d",&data);
				// do deletion will code soon
				printf(" The element was deleted \n");
			} else if(choice == 3) {
				printf(" Enter the element to be searched :");
				scanf("%d",&data);
				if(search(root, data, parent) == NULL) 
					printf("No such element\n");
				else 
					printf(" The element was found \n");
				
			} else if(choice == 4) {
				printf(" Inorder :"); inorder(root) ; printf("\n");
				printf("Postorder :"); postorder(root);printf("\n");	
				printf(" Preorder:"); preorder(root); printf("\n");
				
			} else {
				// nop - no operation 
			}
			printf(" Enter the choice :");
			scanf("%d", &choice);
	}
	return 0;
}

