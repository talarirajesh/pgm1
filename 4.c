#include<stdio.h>
void main()
{
	int i,j,r,sum,n,e1,e2;
	printf("enter the digits \n");
	scanf("%d%d",&i,&e2);
	/*e1=i*0.90;
	for(;i>e1;i--) 
	{
		for(j=e2;j>e1;j--)
		{
			sum=0;
			r=i*j;
			for(n=r;n;n=n/10)
				sum=sum*10+n%10;
			if(sum==r)
			{
				printf("%d*%d %d \n",i,j,sum);
				return;
			}

		}

	}*/


	e1=i*2;
	printf("%d \n",e1);
	for(;i<e1;i++) 
	{
		for(j=e2;j<e1;j++)
		{
			sum=0;
			r=i*j;
			for(n=r;n;n=n/10)
				sum=sum*10+n%10;
			if(sum==r)
			{
				printf("%d*%d %d \n",i,j,sum);
				return;
			}

		}
	}

}
