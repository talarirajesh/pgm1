#include<stdio.h>
void main()
{
	int f3=0,sum=0,f1=0,f2=1;
	while(f3<4*1000000)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		if(f3%2==0)
			sum+=f3;
	}
	printf("%d \n",sum);
}
