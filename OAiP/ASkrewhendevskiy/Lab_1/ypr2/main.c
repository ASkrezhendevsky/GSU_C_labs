#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//������ 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL,"Russian");
	
	double x, y, z, s;
	printf("������� x ");
	scanf("%f",&x);
	printf("������� y ");
	scanf("%f",&y);
	printf("������� z ");
	scanf("%f",&z);
	
	s = z*x*y; //2*cos(x - 2/3)/(0.5 + sin(y)*sin(y)) * (1 + (z*z/(3 - z*z/5)));
	
	printf("\t�����: %f.",s);
	
}
