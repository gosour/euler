#include<stdio.h>

int main()
{
	int matrix[23][2],i,j;
	for(i=0;i<23;i++)
	{
		matrix[i][0]=1;
		matrix[i][1]=9;
	};
	
	int sum;
	int digit, carry=0;
	
	for(j=1;j>=0;j--)
	{
		sum=0;
		for(i=0;i<23;i++)
			sum+=matrix[i][j];
		//printf("Sum: %d\t",sum);
		sum+=carry;
		digit=sum%10;
		carry=sum/10;
		if(j!=0)
			printf("%d",digit);
		else
			printf("--%d",sum);	
	}
}		
