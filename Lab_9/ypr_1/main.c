#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//srand(time(NULL));
	FILE *ff;
	FILE *fg;
	int i;
	float k = 2.0;
	int af;
	
	printf("Enter K:");
	scanf("%f",&k);
	
	if(!(ff = fopen("FILE_F.txt", "r+t")))
	{
		printf("cant find file f\n"); return;
	}
	if(!(fg = fopen("FILE_G.txt", "w+t")))
	{
		printf("cant find file g\n"); return;
	}
	
	
	for(i = 0;i < MAX_SIZE;i++)
	{
		af = 0;
		
		fscanf(ff,"%d",&af); 
		
		if(((float) af/k) == ( af/(int) k))
		{
			fprintf(fg,"%d\n",af);	
		}
	}
	
	fclose(ff);
	fclose(fg);
	return 0;
}
