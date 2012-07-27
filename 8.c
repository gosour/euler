#include<stdio.h>

int max_horizontal(int a[])
{
	int max=a[0]*a[1]*a[2]*a[3];
	int prod,i,j;
	for(i=0;i<=995;i++)
	{
		if( ( prod=(a[i]*a[i+1]*a[i+2]*a[i+3]*a[i+4]) ) >= max)
				max=prod;
		printf("%d\n",prod);		
	}			
	return max;			
}

int main()
{
	FILE *fp;
	int num[1000]={0},count=0,max;
	
	if((fp=fopen("a","r"))==NULL)
		return 1;
		
	char ch;
	while((ch=getc(fp))!=EOF)
		if(ch>='0' && ch<='9')
			num[count++]=(int)(ch-'0');

	printf("Count: %d",count);			
	
//	for(count=0;count<1000;count++)
//		printf("%d\n",num[count]);
	max=max_horizontal(num);
	
	printf("MAX SUM: %d",max);
}
	
	
