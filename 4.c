#include<stdio.h>
#include<math.h>

//THIS IS NOT GOOD
//CHECK IT AGAIN DUNKHEAD
int palindrome(int n)
{
	int temp;
	static int size=0;
	temp=n;
	if(size==0)
	{
		while(temp>9)
		{
			temp/=10;
			size++;
		}
	}
	
	if(n<10)
		return n;
	else
		return n%10*pow(10,size--)+palindrome(n/10);
}
	
int main()
{
	int n,max=0;
	int i,j;
	for(i=999;i>=100;i--)
	{	
		for(j=999;j>=100;j--)
		{
			if(i*j==palindrome(i*j) && i*j>=max)
				max=i*j;		
			
		}
		//if(j!=100)
	//		break;
	}		
end:
	printf("%d\n",max);
	return 0;	
}
