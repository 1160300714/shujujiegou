#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct lnode *next;
}lnode;

int main(int argc, char const *argv[])
{
	lnode *head,*p,*q,*demo;
	head = NULL;

	p = (lnode*)malloc(sizeof(lnode));
	q = (lnode*)malloc(sizeof(lnode));
	p->data = 6;
	p->next = q;

	q->data = 8;
	q->next = NULL;

	
	
	head = p;
	


	demo = head;
	while(demo!=NULL){
		printf("%d\n", demo->data );
		demo = demo->next;
	}




	return 0;
}