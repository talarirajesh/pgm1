#include<stdio.h>
void main()
{
	int n1,n2,j;
	long long int i;
	printf("enter the range\n");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<1000000000;i++)
	{
		for(j=n1;j<=n2;j++)
		{
			if(i%j==0)
				continue;
			else
				break;


		}
		j--;
		if(j==n2)
		{
			printf("%lld \n",i);
			return;
		}
	}
}

