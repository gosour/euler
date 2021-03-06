/* Find the number forming the largest sequence of the collatz conjencture*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=3;
    int count=0;
    int *buffer;    // Used to cache values
	int *tempbuffer;
	int cacheno=0;
    int temp;
	int max_no=2;
	int max=0;

	/*initially seeding the cache for i=2*/
	buffer=malloc(sizeof(int)*3);
	buffer[cacheno++]=0;
	buffer[cacheno++]=0;
	buffer[cacheno]=0;
    for(;i<=1000000;i++)
    {
		temp=i;  
		count=0;
        while(temp!=1)
		{
			count++;
			if(temp<=cacheno)
			{
				count+=buffer[temp];
				break;
			}
			if(temp%2==0)
				temp/=2;
			else
				temp = 3*temp+1;
			
		}
		
		/*Now we need to store it in the cache*/
		cacheno++;
		tempbuffer = realloc(buffer,sizeof(int)*(cacheno+1));
		tempbuffer[cacheno]=count;
		buffer=tempbuffer;		

		if(count>=max)
		{
			max=count;
			max_no=i;
		}
	}
	printf("The nummber that is the [arent of the longest sequence is %d",max_no);
    return 0;
}
