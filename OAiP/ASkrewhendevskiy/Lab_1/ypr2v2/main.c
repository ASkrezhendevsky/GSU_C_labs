#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//������ 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL,"Russian");
	
	float x, y, z, s;
	printf("������� x: ");
	
	scanf("%f",&x);
	printf("������� y: ");
	scanf("%f",&y);
	printf("������� z: ");
	scanf("%f",&z);
	
	printf("x = %f\n",x);
	printf("y = %f\n",y);
	printf("z = %f\n",z);
	s = 2*cos(x - 2.0/3)/(0.5 + sin(y)*sin(y)) * (1.0 + (z*z/(3.0 - z*z/5.0)));
	
	printf("\t�����: %f.",s);
	
}
