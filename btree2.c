/* Binary Search Tree Implementation */
#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

struct btreenode {
	struct btreenode* leftchild;
	int data;
	struct btreenode* rightchild;
};

void insert(struct btreenode** sr,int num) {  // insertion routine
	if(*sr == NULL) {
		*sr = malloc(sizeof(struct btreenode));
		(*sr)->leftchild = NULL;
		(*sr)->rightchild = NULL;
		(*sr)->data = num;
	} else {
		if (num < (*sr)->data)
			insert(&((*sr)->leftchild),num);
		else
			insert(&((*sr)->rightchild),num);
	}
}

	//searching a node in the tree
void search(struct btreenode **root,int num,struct btreenode **par,struct btreenode **x,int *found) {
	struct btreenode *q;
	q = *root;
	*found = FALSE;
	*par = NULL;
	while(q != NULL) {
		// if the node to be deleted is found
		if(q->data == num) {
			*found = TRUE;
			*x=q;
			return;
		}
		*par = q;
		if(q->data > num)
			q = q->leftchild;
		else
			q = q->rightchild;
	}
}

void delete(struct btreenode** root,int num) {  // deletes a node from the tree
	int found;
	struct btreenode *parent,*x,*xsucc;	
	if(*root == NULL) {
		printf(" The tree is empty \n");
		return;
	}
	parent = NULL;
	search(root,num,&parent,&x,&found);
	if(found == FALSE) {
		printf(" The data to be deleted is not in the table \n");
		return;
	}

	// if the node has two children
	if(x->leftchild != NULL && x->rightchild != NULL) {
		parent = x;
		xsucc = x->rightchild;
		while(xsucc->leftchild != NULL) {
			parent = xsucc;
			xsucc = xsucc->leftchild;
		}
		x->data = xsucc->data;
		x=xsucc;
	}
	// if the node has no child
	if(x->leftchild == NULL && x->rightchild == NULL) {
		if(parent->leftchild == x)
			parent->leftchild = x->rightchild;
		else
			parent->rightchild = x->rightchild;
		free(x);
		return ;
	}
	//if the node has only one left child
	if(x->leftchild!=NULL && x->rightchild == NULL) {
		if(parent->leftchild == x)
			parent->leftchild = x->leftchild;
		else
			parent->rightchild = x->leftchild;
		free(x);
		return;
	}
}
	//searching a node in the tree
/*void search(struct btreenode **root,int num,struct btreenode **par,struct btreenode **x,int *found) {
	struct btreenode *q;
	q = *root;
	*found = FALSE;
	*par = NULL;
	while(q != NULL) {
		// if the node to be deleted is found
		if(q->data == num) {
			*found = TRUE;
			*x=q;
			return;
		}
		*par = q;
		if(q->data > num)
			q = q->leftchild;
		else
			q = q->rightchild;
	}
}*/

//inorder traversal of the tree
void inorder(struct btreenode *sr) { 
	if(sr != NULL) {
		inorder(sr->leftchild);
		printf(" %d ",sr->data);
		inorder(sr->rightchild);
	}
}
//preorder traversal of the tree
void preorder(struct btreenode *sr) {
	if(sr != NULL) {
		printf(" %d ", sr->data);		
		preorder(sr->leftchild);
		preorder(sr->rightchild);
		
	}
}
// postorder traversal of the tree
void postorder(struct btreenode *sr) {
	if(sr!=NULL) {
		postorder(sr->leftchild);
		postorder(sr->rightchild);
		printf(" %d ",sr->data);
	}
}

int main(int argc ,char **argv) {
	struct btreenode *bt = NULL;
	struct btreenode *parent,*x;
	int found,elem;
	int ch;
	printf(" 1: insert  2: list  3: search 4: delete 5: exit \n");
	printf(" Enter the operation to be performed :");
	scanf("%d",&ch);
	while(ch != 5 ) {
		switch(ch) {
			case 1:	
				printf(" Enter the element to be inserted:");
				scanf("%d",&elem);
				insert(&bt,elem);
				break;
			case 2:
				printf(" Inorder :");
				inorder(bt);
				printf("\n");
				printf(" Preorder :");
				preorder(bt);
				printf("\n");
				printf(" Postorder :");
				postorder(bt);
				printf("\n");
				break;
			case 3:
				printf(" Enter the element to be searched ");	
				scanf("%d",&elem);
				search(&bt,elem,&parent,&x,&found);
				if(found == TRUE)
					printf( " The element is found in the tree \n");
				else
					printf(" The element is not in the tree \n");
				break;
			case 4:
				printf(" Entere the element to be deleted :");
				scanf("%d",&elem);
				delete(&bt,elem);
				
				break;
			default :
				printf(" invalid command \n");
		}		
		printf(" Enter the operation to be performed :");
		scanf("%d",&ch);
	}

	return 0;
}

