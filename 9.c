#include<stdio.h>
void main()
{
	int a,b,i,j,c,sum;
	printf("enter the sum value \n");
	scanf("%d",&sum);
	for(i=1;i<1000;i++)
	{
		for(j=1;j<1000;j++)
		{
			c=sum-i-j;
			if(c*c==(i*i)+(j*j))
			{
				printf("a=%d b=%d c=%d \n",i,j,c);
				printf("product abc=%d\n",c*i*j);
				return;
			}
		}
	}
}
