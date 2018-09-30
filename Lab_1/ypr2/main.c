#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	float x, y, z, s;
	printf("Enter x: ");
	
	scanf("%f",&x);
	printf("Enter y: ");
	scanf("%f",&y);
	printf("Enter z: ");
	scanf("%f",&z);
	
	printf("x = %f\n",x);
	printf("y = %f\n",y);
	printf("z = %f\n",z);
	s = log(pow(y,-pow(fabs(x),0.5)))*(x - y/2.0) + sin(atan(z))*sin(atan(z));	
	
	printf("\tResult: %f.",s);
	
}
