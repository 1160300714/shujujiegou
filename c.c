#include <stdio.h>

#define MAX 50

typedef struct{
	int data[MAX];
	int length;
}SqList;

int aaa(SqList l){
	if (l.length<1)
	{
		printf("error\n");
		return 0;
		/* code */
	}
	int temp = l.data[0];
	int num = 0;
	for (int i = 0; i < l.length; i++)
	{
		if (temp>=l.data[i])
		{
			temp = l.data[i];
			num = i;
			/* code */
		}
		/* code */
	}
	l.data[num]=l.data[l.length-1];

	l.length--;
	return temp;

};

int bbb(SqList l){
	int temp = 0;
	for (int i = 0; i < l.length; i++)
	{
		temp = l.data[i];
		l.data[i] = l.data[l.length-i-1];
		l.data[l.length-i-1] =temp;
		/* code */
	}
	return 0;
}

int main(int argc, char const *argv[])
{

	SqList l ;
	int a;

	l.data[0] = 6;
	l.data[1] = 4;
	l.data[2] = 2;
	l.data[3] = 9;
	l.data[4] = 7;
	l.data[5] = 5;
	l.length = 6;


	for (int i = 0; i < l.length; i++)
	{
		printf("%d", l.data[i]);
		/* code */
	}

	a = aaa(l);
	printf("%d\n", a);
	

	return 0;


}

