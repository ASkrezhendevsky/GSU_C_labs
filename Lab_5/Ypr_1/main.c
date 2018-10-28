#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int N, M, i, j;
	float sum = 0.0;
	float min = 0.0;
	int indxmin = 0;
	float max = 0.0;
	int indxmax = 0;
	printf("Enter M ");
	scanf("%d",&M);
	printf("Enter N ");
	scanf("%d",&N);
	float a[N][M];
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			a[i][j] = -10 + rand() %20; 
		}
	}
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	for(i = 0;i < N;i++)
	{
		min = 0;
		max = 0;
		indxmax = 0;
		indxmin = 0;
		for(j = 0;j < M;j++)
		{
			if(a[i][j] < min || j == 0)
			{
				min = a[i][j];
				indxmin = j;
			}
			if(a[i][j] > max || j == 0)
			{
				max = a[i][j]; 
				indxmax = j;	
			}
		}
		a[i][indxmax] = min;
		a[i][indxmin] = max;
	}
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n\n");
	}
	
	int H;
	if(N > M)
	{
		H = M;
	}
	else
	{
		H = N;
	}
	for(i = 0;i < H;i++)
	{
		sum += a[i][i];
	}
	
	printf("sum = %f\n",sum);
	
	return 0;
}
