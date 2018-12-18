#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// вариант 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// вариант 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n = 0, i = 0, num = 0;
	
	printf("Enter n:\n");
	scanf("%d",&n);
	
	float j = 0.0;
	
	while(i <= pow(n,1.0/3))
	{
		j = pow((float)n - pow(i,3),1.0/3);
	
		printf("\nj = %f, if i = %d",j,i);
		
		if(j == round(j) && j >= i)
		{
			num++;
			printf(" <- ok");
		}
			
		i++;
	}
	printf("\nnum = %d",num);
	return 0;
}
