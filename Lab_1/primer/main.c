#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL,"Russian");
	float x = 0, a = 0, b = 0, c = 0, z = 0;
	int m = 0;
	printf("Введите x(x>0): ");  
	scanf("%f",&x);
	printf("Введите m: "); 
	scanf("%d",&m);
	 
	a = sqrt(x*x + m*m);
	b = tan(x)*tan(x);
	c = b/a+c*a;
	
	z = b/a + c*a;
	
	printf("Вы ввели x = %0.3f, m = %d \nРкзультат: %5.3e",x,m,z);
}
