#include<stdio.h>
#include<stdlib.h>

int *dynamic;
int count=0;

void push(int n)
{
	int *temp,i=count,j=0;
	temp = malloc(sizeof(int) *count);
	while(--i)
		temp[j] = dynamic[i];
	dynamic = realloc(dynamic,sizeof (int)*(++count));
	
	i=count;
	while(--i)
		dynamic[i]=temp[i];
}
	

int main()
{
	FILE *fp;
	if( (fp=fopen("13txt","r"))==NULL)
		return 1;
	int matrix[100][50];
	int i=0,j=0;
	char ch;
	
	while( (ch=getc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			i++;
			j=0;
		}		
		else	
			matrix[i][j++] = ch-'0';
	}
	
	int sum=0;
	j=0;
	int digit=0,carry=0;
	for(j=49;j>=0;j--)
	{
		sum=0;
		for(i=0;i<100;i++)
			sum+=matrix[i][j];
		sum+=carry;	
		digit=sum%10;
		carry=sum/10;
		if(j!=0)	
			printf("%d",digit);
		else
			printf("--%d",sum);	
	}		
}

