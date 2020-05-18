#include <stdio.h>

#define MAX 50

typedef struct{
	int data[MAX];
	int length;
}SqList;

int outlist(SqList l){
	for (int i = 0; i < l.length; i++)
	{
		printf("%d ", l.data[i]);
		/* code */
	}
	printf("\n");
}

int a1(SqList l){
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
}

SqList a2(SqList l){
	int temp = 0;
	for (int i = 0; i < l.length/2; i++)
	{
		temp = l.data[i];
		l.data[i] = l.data[l.length-i-1];
		l.data[l.length-i-1] =temp;
		/* code */
	}
	//打印
	outlist(l);
	return l;
}

int a3(SqList l,int x){
	int num = 0;
	for (int i = 0; i < l.length; i++)
	{
		l.data[i-num] = l.data[i];
		if (l.data[i] == x)
		{
			num++;
			/* code */
		}
		/* code */
	}
	for (int i = 0; i < num; i++)
		{
			l.length--;
			/* code */
		}

	//打印
	outlist(l);
	return 0;
}

int a4(SqList l,int s,int t){
	//必须有序表
	int k = 0;
	for (int i = 0; i < l.length; i++)
	{
		if (l.data[i]>s && l.data[i]<t)
		{
			k++;
			/* code */
		}
		if (l.data[i]>=t)
		{
			l.data[i-k] = l.data[i];
			/* code */
		}

		/* code */
	}
	for (int i = 0; i < k; i++)
	{
		l.length--;
		/* code */
	}
	outlist(l);
}

int a5(SqList l,int s,int t){
	if (l.length > 0 )
	{
		if (s<t)
		{
			int k = 0;
			for (int i = 0; i < l.length; i++)
			{
				l.data[i-k] = l.data[i];
				if (l.data[i]>=s && l.data[i]<=t)
				{

					k++;

					/* code */
				}
				
				/* code */
			}
			for (int i = 0; i < k; i++)
			{
				l.length--;
				/* code */
			}

			outlist(l);
			return 1;

			/* code */
		}
	}
	printf("error\n");
	return 0;
}

int a6(SqList l){
	for (int i = 0; i < l.length; i++)
	{
		for (int j = i+1; j < l.length; j++)
		{
			int temp = 0;
			if (l.data[i] == l.data[j])
			{
				temp++;
				for (int k = j+1; k < l.length; k++)
				{
					l.data[k-1] = l.data[k];

					/* code */
				}
				for (int q = 0; q < temp; q++)
				{
					l.length--;
					/* code */
				}

				/* code */
				j--;
			}
			/* code */
		}
		/* code */
	}

	outlist(l);
}

int a7(SqList a,SqList b){
	SqList c;
	int i,j,k;
	i = 0;
	j = 0;
	k = 0;
	while(i < a.length && j < b.length){

		if (a.data[i]<b.data[j])
		{
			c.data[k] = a.data[i];
			k++;
			i++;
			/* code */
		}else{
			c.data[k] = b.data[j];
			k++;
			j++;
		}

	}
	while(i<a.length) {
		c.data[k] = a.data[i];
		k++;
		i++;
	}
	while(j<b.length) {
		c.data[k] = b.data[j];
		k++;
		j++;
	}

	c.length = a.length + b.length;
	outlist(c);

	return 0;
}

int a8(SqList a, SqList b){
	int temp[a.length+b.length];
	int i;
	int m = a.length;
	int n = b.length;
	int h1[m];
	//合并
	for (i = 0; i < a.length; i++)
	{
		temp[i] = a.data[i];
		/* code */
	}
	for (int j = 0; j < b.length; j++)
	{
		temp[i+j] = b.data[j];
		/* code */
	}
	for (int k = 0; k < (a.length+b.length); k++)
	{
		printf("%d",temp[k] );
		/* code */
	}
	printf("\n");
	

	//互换1---------------------------------
	// for (int i = 0; i < m; i++)
	// {
	// 	h1[i] = temp[i];
	// 	/* code */
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	temp[i] = temp[m+i];
	// 	/* code */
	// }
	// for (int i = 0; i < m; i++)
	// {
	// 	temp[m+i] = h1[i];
	// 	/* code */
	// }
	// for (int i = 0; i < m+n; ++i)
	// {
	// 	printf("%d",temp[i] );
	// 	/* code */
	// }

	//互换2----------------------------
	//全转
	for (int i = 0; i < (m+n)/2; i++)
	{
		int temp0 = 0;
		temp0 = temp[i];
		temp[i] = temp[m+n-i-1];
		temp[m+n-i-1] =temp0;
		/* code */
	}
	//前后转
	for (int i = 0; i < n/2; i++)
	{
		int temp0 = 0;
		temp0 = temp[i];
		temp[i] = temp[n-i-1];
		temp[n-i-1] =temp0;
		/* code */
	}
	for (int i = 0; i < m/2; i++)
	{
		int temp0 = 0;
		temp0 = temp[n+i];
		temp[n+i] = temp[m+n-i-1];
		temp[m+n-i-1] =temp0;
		/* code */
	}
	for (int i = 0; i < m+n; ++i)
	{
		printf("%d",temp[i] );
		/* code */
	}



	return 0;
}


int main(int argc, char const *argv[])
{

	SqList l,l2,l3 ;
	int a;
	l.data[0] = 2;
	l.data[1] = 5;
	l.data[2] = 5;
	l.data[3] = 5;
	l.data[4] = 7;
	l.data[5] = 9;
	l.length = 6;
	l2.data[0] = 2;
	l2.data[1] = 5;
	l2.data[2] = 6;
	l2.data[3] = 7;
	l2.data[4] = 8;
	l2.data[5] = 9;
	l2.length = 6;
	// outlist(l);
	// outlist(l2);


	//a = a1(l);
	//printf("%d\n", a);

	//a2(l);

	//a3(l,2);

	//a4(l,4,7);//必须有序表

	//a5(l,3,7);

	// a6(l);

	// a7(l,l2);

	// a8(l,l2);




	return 0;


}

