#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct lnode *next;
}lnode;

int output(struct londe *l){
	lnode *print = l;
	while(print!=NULL){
		printf("%d\n", print->data );
		print = print->next;
	}
	return 1;
}

lnode *getelem(struct lnode *l ,int i){//查找节点
	int j = 1;
	struct lnode *p;
	p = l->next;
	//错误处理
	while(j<i){
		p = p->next;
		j++;
	};
	return p;
}

int main(int argc, char const *argv[])
{
	lnode *head,*a,*b,*c,*d;
	lnode *print;//打印
	head = NULL;

	a = (lnode*)malloc(sizeof(lnode));
	b = (lnode*)malloc(sizeof(lnode));
	c = (lnode*)malloc(sizeof(lnode));
	d = (lnode*)malloc(sizeof(lnode));

	a->data = 6;
	a->next = b;

	b->data = 8;
	b->next = c;

	c->data = 9;
	c->next = d;

	d->data = 11;
	d->next = NULL;

	head = a;//头指针赋值

	output(head);



	return 0;
}
