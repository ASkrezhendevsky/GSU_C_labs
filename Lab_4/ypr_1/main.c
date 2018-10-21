#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_A 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a[MAX_A];
	int i;
	
	
	for(i = 0;i < MAX_A;i++)
	{
		a[i] = -10 + rand() %20; 
	}
	
	
	printf("Before: \n");
	for(i = 0;i < MAX_A;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	int b[MAX_A] = {0};
	int bHead = 0;
	
	for(i = 0;i < MAX_A;i++)
	{
		if(a[i] < 0)
		{
			b[bHead] = a[i];
			bHead++;
		}
	}
	
	for(i = 0;i < MAX_A;i++)
	{
		if(a[i] >= 0)
		{
			b[bHead] = a[i];
			bHead++;
		}
	}
	
	printf("After: \n");
	for(i = 0;i < MAX_A;i++)
	{
		printf("%d, ",b[i]);
	}
	printf("\n");
	
	return 0;
}





















