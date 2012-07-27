/*Sum of all prime numbers below 2 million
*/

#include<stdio.h>
#include<math.h>

int ifprime(int i)
{
	//0: Not Prime
	//1: Prime
	int j;
	
	if(i!=2 && i%2==0)
		return 0;	
	if(i==2 || i==3)
		 return 1;
			
	if(  ((int)((i-1)/6))==((float)((i-1)/6.0))  || ((int)((i+1)/6))==((float)((i+1)/6.0)) ) 
			for(j=3;j<=sqrt(i);j+=2)
			{
				if(i%j==0)
					return 0;
			}
	else
		return 0;		

	return 1; 
}

int main()
{
	long sum=2,count=3;
	int num=2000000;
	
	while(count < num)
	{
		if(ifprime(count))
			sum+=count;
		count+=2;
	}
	printf("Sum is %ld\n",sum);
}

