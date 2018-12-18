#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float result = 0.0;
	int i = 0;
	do
	{
		i++;
		result = result + 1.0/i;
		//printf("%f\n",result);
	}
	while(result <= 5.0);
	
	printf("%d",i);
	return 0;
}
