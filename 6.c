#include<stdio.h>
void main()
{
	int i,j,s1,s2,n1;
	printf("enter the range \n");
	scanf("%d",&n1);

	for(i=1,s1=0,s2=0;i<=n1;i++)
	{
		s1+=(i*i);
		s2+=i;
	}
	s2*=s2;
	printf("sqs=%d  ssq=%d d= %d\n",s1,s2,s2-s1);

}

	
