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
		case 1: 	printf("������"); 		break;
		case 2: 	printf("�������"); 		break;
		case 3:		printf("����"); 		break;
		case 4: 	printf("������"); 		break;
		case 5:		printf("���"); 			break;
		case 6:		printf("����"); 		break;
		case 7:		printf("����"); 		break;
		case 8:		printf("������"); 		break;
		case 9:		printf("��������"); 	break;
		case 10:	printf("�������"); 		break;
		case 11:	printf("������"); 		break;
		case 12:	printf("�������"); 		break;
		default: 	printf("error: �� ���������� �������� ������"); 	 break;
	}
	return 0;
}
