#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float r = 0, x = 0, y = 0;
	printf("Enter x: ");
	scanf("%f",&x);
	printf("Enter y: ");
	scanf("%f",&y);
	r = x*x+y*y; //r содержит радиус в квадрате
	if(r == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
