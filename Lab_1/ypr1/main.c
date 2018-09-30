#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float x;
	
	printf("Enter x: ");
	
	scanf("%f",&x);
	x = 2*pow(x,8);
	
	printf("Result: %0.3f",x);
}
