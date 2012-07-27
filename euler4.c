/*Sourav Goswami
26 March 2012
euler4.c
To find the largest palindrome formed by the product of two three digit numbers
*/

#include<stdio.h>

int palin(int);
int power(int,int);
int count=0;

int main(int argc, char *argv[])
{
	int num=atoi(argv[1]);
	int reverse=palin(num);
	printf("Num %d\n",num);
	printf("power %d\n",power(2,num));
	printf("%d",reverse);
	return 0;
}

int power(int x, int y) //x^y
{
	int i, product=1;
	for(i=1;i<=y;i++)
		product*=x;
	return product;
}

int palin(int x)
{
	if(x<10)
		return x*power(10,count++);

	return palin(x/10)+ (x%10)*power(10,count++);
}
