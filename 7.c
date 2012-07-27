#include<stdio.h>
#include<math.h>
#include<time.h>

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
	int rank,i=2,j,count=0,temproot,flag;
	
//	printf("Enter the rank: ");
//	scanf("%d",&rank);
	rank=10001;
	
	while(1)
	{
		if(ifprime(i))
		{
			count++;
			if(count==rank)
			{
				printf("%d\n",i);
				break;
			}
		}
	
		if(i==2)
			i++;
		else
			i+=2;
	}
}		
