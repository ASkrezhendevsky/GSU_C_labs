#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 //������� 1 ��� 1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Russian");
	
	float x;
	
	printf("������� x: ");
	
	scanf("%f",&x);
	x = 32*pow(x,6);
	
	printf("���������: %0.3f",x);
}
