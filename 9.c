/*There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product a*b*c
*/

//This sucks ass but its gives the result and is *almost* brute force
//BTW this can be done by simple algebra, but this is more fun and even list pyth triplets!!

#include<stdio.h>
#include<math.h>

#define SQRT(i,j)  sqrt(i*i + j*j)
#define CHECK(i,j) ( (double)SQRT(i,j)==(int)SQRT(i,j) )	//Just a normal if (a^2 + b^2)^.5= is a natural number
#define CONSTRAINT(small,big)  ( (small+SQRT(small,big)) < big )  // a+b>c for a triangle. Returns 1 if not followed


int main()
{

	int a=0,b=0,c=0;
	
	int l=1;	//For counting odds
	int k=1; //For counting evens
	int count=2,track=0;
	int even,odd;
	int big,small;
	int flag_break=0;
	
	
	while(1)
	{
		odd=2*l+1;
		even=4*k;
//		printf("l= %d k= %d odd= %d even=%d \n",l,k,odd,even);
		
		if(count % 2==0)
		{
			small=odd;
			big=even;
		}
		else
		{
			small=even;
			big=odd;
		}	
	
		
		while(!CONSTRAINT(small,big))
		{
			if(CHECK(small,big))
			{
				track++;			
				a=small; //Ignoring the check of which is bigger for now
				b=big;
				c=sqrt(a*a+b*b);
				if(a+b+c==1000)
				{
					printf("%d\t%d\t%d and Product= %d\n",a,b,c,a*b*c);
					//flag_break=1;
					break;
				}	
			}	
			else if (count%2==0)
				 big+=4;
			else	 
				 big+=2;
		}						
			
						
		if(count%2==0)
			l++;
		else
			k++;
		count++;
			
//		if(track==100)
	//		break;
		if(flag_break)
			break;

	}
			
	
	return 0;
}
