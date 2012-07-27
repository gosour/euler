#include<stdio.h>
#include<math.h>

#define COND(i) ( (i!=2) && (i!=3) && (  ((int)((i-1)/6))==((float)((i-1)/6.0))  || ((int)((i+1)/6))==((float)((i+1)/6.0)) ) )

int main()
{
	long int num, root,temproot;
	long int i,max,j;
	int flag=0;
	
	scanf("%ld",&num);
	root=sqrt(num);
	for(i=2;i<=root;i++)
	{
		flag=0;
		if(num%i!=0)		//Doesnot even divide, no furthur checks!
			continue;
		if(i!=2 && i%2==0) 	//Skip all even numbers
			continue;
		if(i==2 || i==3)
		{
			max=i;
			continue;
		}
		if(!COND(i))  		//Skip all  non-(6n+1 or 6n-1) forms. They are not primes
			continue;

		temproot=sqrt(i);
		for(j=3;j<=temproot;j+=2)			//can be optimized furthur?
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
			max=i;
	}
	printf("%ld",max);	
	return 0;
}
