#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// вариант 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n = 27, i = 0, j = 0, num = 0;
	
	float fcheck = 0.0;
	
	while(i <= pow(n,1.0/3))
	{
		fcheck = pow((float)n - pow(i,3),1.0/3);
	
		//printf("\nfcheck = %f, if i = %d",fcheck,i);
		
		if(fcheck == round(fcheck) && fcheck >= i)
		{
			num++;
			printf(" <- ok");
		}
			
		i++;
	}
	printf("\nnum = %d",num);
	return 0;
}
