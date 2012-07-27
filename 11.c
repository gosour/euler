/* What is the greatest product of four adjacent numbers in any direction
*/

#include<stdio.h>

int max_horizontal(int q[][20]);
int max_vertical(int q[][20]);
int max_diagonal(int q[][20]);

int main()
{
	FILE *fp;
	int array[20][20]={0},i=0,j=0;
	char ch,ch1;

	fp=fopen("11txt","r");
	
	for(i=0;i<20;i++)
		for(j=0;j<20;)
			if( (ch=getc(fp))!=EOF && ch >='0' && ch<='9')
			{
				ch1=getc(fp);
				array[i][j++]=(ch-'0')*10 + (ch1-'0');
			}	
	int p=max_horizontal(array);
	int q=max_vertical(array);
	printf("Diagional Max %d\n",max_diagonal(array));			
				
		
}
			
int max_horizontal(int a[][20])
{
	int max=a[0][0]*a[0][1]*a[0][2]*a[0][3];
	int prod,i,j;
	for(i=0;i<20;i++)
		for(j=0;j<17;j++)
			if( ( prod=(a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]) ) >= max)
				max=prod;
				
	return max;			
}			

int max_vertical(int a[][20])
{
	int max=a[0][0]*a[0][1]*a[0][2]*a[0][3];
	int prod,i,j;
	for(i=0;i<20;i++)
		for(j=0;j<17;j++)
			if( ( prod=(a[j][j]*a[j][i+1]*a[j][i+2]*a[j][i+3]) ) >= max)
				max=prod;
				
	return max;			
}	

int max_diagonal(int a[][20])
{
	int max=a[0][0]*a[0][1]*a[0][2]*a[0][3];
	int prod1,prod2,i,j;
	for(i=0;i<20;i++)
		for(j=0;j<20;j++)
		{
				if(!(j>16) && !(i>16))
					prod1=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
				if(!(j<3) && !(i>16))
					prod1=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
					
				if(prod1>=prod2)
				{
					if(prod1>=max)
						max=prod1;
				}		
				else		
				{
					if(prod2>=max)
						max=prod2;
				}			
		}
	return max;
}			
			
