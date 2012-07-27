/*
Sourav Goswami
18 Feb 2012
euler1.c
Add all the natural numbers below one thousand that are multiples of 3 or 5.
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,sum=0;
	for(i=5;i<1000;i++)	
	{
		if(i%3==0||i%5==0)
			sum=sum+i;
	}
	sum+=3;
	printf("The sum is %d ",sum);
	return 0;
}
