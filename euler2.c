/*
Sourav Goswami
18 Feb 2012
euler2.c
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
Four million=4000000
*/
#include<stdio.h>
int main()
{
	long unsigned int n=1,sum=0,sum_before=1,sum_evenbefore=1;
	do
	{
		n=sum_before+sum_evenbefore;
		sum_evenbefore=sum_before;
		sum_before=n;
		if(n!=1&&n%2==0)
			sum+=n;
	}while(n<4000000);
	printf("%d",sum);
}
		
		
			
