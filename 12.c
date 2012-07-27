/*
Value of first triangle number to have over 500 divisors
*/

#include<stdio.h>
#include<math.h>

int ifprime(long int i)
{
	//0: Not Prime
	//1: Prime
	int j;
	
	if( (i!=2 && i%2==0) || i<=1)
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

int triangle(int n)
{
	if(n==1)
		return 1;
	else
		return n+triangle(n-1);
}	

/*Try 2
*/
int no_of_divisors(long int n)
{
	int store[500]={0};
	long int i=2;
	int power=1;
	int prod=1;
	int sum=0;
	int continue_flag=0;
	int skip_flag=0;
	int j;
	int index=0;
	
	while(i<=n && index<=499)	
	{
		printf("Hi\n");
		printf("index is : %d",index);
		if( (i!=2 && i%2==0) || i<=1)
			continue;	
			
		if(i==2 || i==3)
			 skip_flag=1;
			
		if(  ((int)((i-1)/6))==((float)((i-1)/6.0))  || ((int)((i+1)/6))==((float)((i+1)/6.0)) && !skip_flag) 
		{
			for(j=0;store[j]<=sqrt(i) && j<=index;j++)
			{
				if(i%store[j]==0)
					continue_flag=1;
			}
		}		
		else
			continue;
		
		if(continue_flag==1)
			continue;
		printf("i is : %d\n",i);
		store[index++]=i++;
	}
	
	if(index!=499)
		store[++index]=-1;
			
	for(i=0;i<500 && store[i]!=-1;i++)
		printf("%d\n",store[i]);
	
/*	while(i<=n)
	{
		if(n%i!=0)
		{
			i+=2;
			continue;
		}
		
		if(ifprime(i))		
		{
				power=1;
				while( (n%(long int)pow(i,power))==0)
					power++;
				power--;	
				sum+=power;
				prod*=power;
		}
		if(i==2)
			i++;
		else
			i+=2;	
	}	
		return sum+prod+1;	
*/		
	return 0;
}			
		
int main()
{
	long int i=0,max=0;
	//printf("%d: ",triangle(100000));
/*	for(i=10;i<=100000000;i++)
		if(no_of_divisors(i)>=max)
			max=no_of_divisors(i);
	printf("Max no of divisors %ld\n",max);
*/
	no_of_divisors(100);
	return 0;
}	
