#include<stdio.h>
void main(){
	long long int j=600851475143,i,k;
	int a;
	for(i=2;i<10000;i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)
				break;
		}
		if(i==k)
		{
			if(j%i==0)
			{
				a=i;
	                printf("%d \n",a);
			}
		}


	}
	printf("%d \n",a);
}
