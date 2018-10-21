#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_A 10
//вариант 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a[MAX_A];
	int i, num;
	float averige = 0.0;
	
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
	
	
	for(i = 0;i < MAX_A;i++)
	{
		averige =+ a[i];
	}
	averige = averige/MAX_A;
	
	printf("averige = %f\n",averige);
	
	for(i = 0;i < MAX_A;i++)
	{
		if(a[i] > averige-3 && a[i] < averige+3 )
		{
			printf("%d, ",a[i]);
			num++; 
		}
	}
	printf("\nnum = %d\n",num);
	
	return 0;
}











