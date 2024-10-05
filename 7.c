#include<stdio.h>
void main()
{
	int i,j,c,num;
	printf("enter the which position prime number you want \n");
	scanf("%d",&num);
	for(i=2,c=0;i<1000000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;

		}
		if(j==i)
		{
			c++;
			if(c==num)
			{
				printf("%d \n",i);
				return;
			}
		}



	}
}
