#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a = 0.0, b = 0.0, c = 0.0, result = 0.0;
	printf("Enter a: ");
	scanf("%f",&a);
	
	printf("Enter b: ");
	scanf("%f",&b);
	
	printf("Enter c: ");
	scanf("%f",&c);
	
	if(a == 1/b)
	{
		result = c;
	}
	if(a == 1/c)
	{
		result = b;
	}
	if(b == 1/c)
	{
		result = a;
	}

	if(result != 0)
	{
		printf("%f",result);
	}
	else
	{
		printf("no");
	}
	return 0;
}
