/*Sourav Goswami
18 Feb 2012
euler3.c
What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>
int main()
{
	long unsigned int x;
	scanf("%i",&x);
	long unsigned int n,i=2,temp,max=1;
	do
	{
		if(i%2==0)
			temp=3*i+1;
		else
			temp=3*i+2;
		
		if(x%temp==0 && temp>=max)
			max=temp;
		i++;
	}while(temp<=x);
	printf("%d is the largest prime factor ", max);
	return 0;
}
		
