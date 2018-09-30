#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//Вриант 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL,"Russian");
	
	double x, y, z, s;
	printf("Введите x ");
	scanf("%f",&x);
	printf("Введите y ");
	scanf("%f",&y);
	printf("Введите z ");
	scanf("%f",&z);
	
	s = z*x*y; //2*cos(x - 2/3)/(0.5 + sin(y)*sin(y)) * (1 + (z*z/(3 - z*z/5)));
	
	printf("\tОтвет: %f.",s);
	
}
