/* OK I just took a hint ,a small one damnit!
*/

#include<stdio.h>
#include<math.h>

int divisors(int triangle)
{
	int count;
	double square;
	int no=1;
	square=sqrt(triangle);
	count= (square-(int)square)? -1:0;
	
	for(no;no<=square;no++)
		if(0==triangle%no)
			count+=2;
	return count;
}		
	
int main()
{
	int triangle=1;
	int count =1;
	
	while(divisors(triangle)<=500)
		triangle += ++count;
	printf("%d\n",triangle);
}		
