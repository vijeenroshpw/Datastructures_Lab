/*                                            A programme to create an expression tree && Evaluate the expression 
 * Author:Vijeenrosh P.W <hsorhteeniv@gmail.com>
 * Created : 12-02-2012
 * Last Modified : 12-02-2012
 * Platforms     : gcc 3.3.1 (Linux based) , Turbo C (Win32 platform)
 * 
       Algorithm used :
		Well, I would like to call this an '3-Element-Array'(TEA) algorithm , Cause I have used an 3 element array  as an main part to create an binary tree
		working I will update in my blog soon .
		
		
 */
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define MAX_EXPR_LEN 50
struct node {     // the node of the tree
	char data;
	struct node * left, *right;
};

struct node * CreateNode(char data) {  // creates and returnes an node 
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int ComputeLastIndex(char expr[],int start)  { 
	int opcount=1,i=start+1;
	
	while(opcount != 0) { // does the actual working 
		if(expr[i] == '(') {
			opcount++;
		} else if(expr[i] == ')') {
			opcount--;
		} else {
			//nop
		}
		i++;
	}
	return i-1;
}	

struct node * BuildTree(char expr[],int start, int end ) { // builds the expression tree and returnes the root 
	struct node * arr[3]={NULL}; // the main array 
	int arr_len=0;  // the length of the above array 
	int i=start+1;
	while(i != end + 1) {                        // the main loop in this routine
		if(arr_len == 3) {               // if the length of the arrays 3 then 
			arr[1]->left = arr[0];
			arr[1]->right = arr[2];
			arr[0] = arr[1];
			arr_len=1;       // reset the array length 
				
		}
		 if((expr[i] >= '0' && expr[i] <= '9')|| expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i]=='/') {  // create and store an node 
			arr[arr_len++] = CreateNode(expr[i]);
			i++;       		
		} else if(expr[i] == '(' ) {       //  time to make hands dirty 
			arr[arr_len++] = BuildTree(expr,i,ComputeLastIndex(expr,i));   // an recursive call 
			i  =  ComputeLastIndex(expr,i)+1;  // resets the i to next part/token		
		} else {
			i++;   // the other case is ) which is of no interest to us correnly 
		}
	}
	return arr[0];
}
void inorder(struct node * root) { // displays the tree 
	if (root == NULL ) 
		return;
	inorder(root->left);	
	printf(" %c ",root->data);	
	inorder(root->right);
}

void preorder(struct node *root) {  // prints out the preorder expression
	if(root == NULL) 
		return;
	printf("%c",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root) {  // gives out the expressions postfix form
	if(root == NULL) 
		return;
	postorder(root->left);
	postorder(root->right);
	printf(" %c ",root->data);
}

float evaluate(struct node *root) {  // evaluates an returns the value 
	float rexpr, lexpr,result;	
	if(root->data >= '0' && root->data <= '9') {  // if the stuff is an number 
		return root->data-48;                 //return the numerical value of that number
	}
	lexpr=evaluate(root->left);   // evaluates and returnes the left subexpression
	rexpr = evaluate(root->right);  //evaluates and returnes the right subexpression
	switch(root->data) {
		case '+':
			result = lexpr + rexpr;
			break;
		case '-':
			result = lexpr - rexpr;
			break;
		case '*':
			result = lexpr * rexpr;
			break;
		case '/':                           // hmm , just to support this operation i had to use float :( 
			result = lexpr/rexpr;
			break;
	}
	return result;
}
			
int main(int argc, char **argv) { 
	char expr[MAX_EXPR_LEN];
	struct node *root;	
	printf(" Enter the expression :");
	scanf("%s", expr);
        //	strcpy(expr,")");   // appends the closing braces at the end of the expression 
	root = BuildTree(expr, -1 ,strlen(expr)); 
	printf("%s",expr);	
	printf(" The infix form ( what you have entered ) :");
	inorder(root);
	printf("\n");	
	printf(" The preorder expression :") ;
        preorder(root);
        printf("\n");
	printf("The post order expression :");
	postorder(root);
	printf("\n");	
	printf(" The value of the expression is : %f \n" ,evaluate(root));	
	return 0;
}

