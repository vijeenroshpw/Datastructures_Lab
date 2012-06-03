#include<stdio.h>
#include<malloc.h>
void fileread(FILE* fp);
struct node {
	char name[20];
}nodes[3];
int main(int argc , char** argv) {
	FILE* fp;
	fp = fopen("data.txt","r");	
	fileread(fp);	
	printf("\n%s\n",nodes[2].name);
	return 0;
}
void fileread(FILE* fp) {	
	int count;
	char name[20];	
	fscanf(fp,"%d" , &count);
	while(count--) {
		fscanf(fp,"%s",nodes[count-1].name);
		printf("%s",nodes[count-1].name);
	}
	
}

