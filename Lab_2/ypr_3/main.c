#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int month;
	printf("Enter month: ");
	scanf("%d",&month);
	switch(month)
	{
		case 1: 	printf("Январь"); 		break;
		case 2: 	printf("Февраль"); 		break;
		case 3:		printf("Март"); 		break;
		case 4: 	printf("Апрель"); 		break;
		case 5:		printf("Май"); 			break;
		case 6:		printf("Июнь"); 		break;
		case 7:		printf("Июль"); 		break;
		case 8:		printf("Август"); 		break;
		case 9:		printf("Сентябрь"); 	break;
		case 10:	printf("Октябрь"); 		break;
		case 11:	printf("Ноябрь"); 		break;
		case 12:	printf("Декабрь"); 		break;
		default: 	printf("error: не корректное значение месяца"); 	 break;
	}
	return 0;
}
