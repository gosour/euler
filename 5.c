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
	int n,result=1,i,count;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(!ifprime(i))
			continue;
										
		count=1;
		while( (test=(int)pow(i,count)) <=n  )
			count++;
			
		result*=(int)pow(i,count-1);
	}
	
	printf("%d\n",result);
	return 0;
}
			
