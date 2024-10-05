// the sum of all multiples of 3 or 5 baesd on given range

#include<stdio.h>
void main()
{
	int i,j,sum,range;
	printf("enter the given range \n");
	scanf("%d",&range);
	for(i=1,sum=0;i<range;i++)
	{
		if(i%3==0 || i%5==0)
			sum+=i;
	}
	printf("%d \n",sum);
}


