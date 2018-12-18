#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int N, i, j;
	float sum = 0.0;
	
	printf("Enter N ");
	scanf("%d",&N);
	
	float a[N][N];
	
	int ok;
	printf("Create matrix by:\n1 - random\n2 - from console ");
	scanf("%d",&ok);
	switch (ok)
	{
		case 1:
			for(i = 0;i < N;i++)
			{
				for(j = 0;j < N;j++)
				{
					a[i][j] = -10 + rand() %20; 
				}
			}
		break;
		case 2:
			for(i = 0;i < N;i++)
			{
				for(j = 0;j < N;j++)
				{
					printf("Enter element: i = %d, j = %d ",i,j);
					scanf("%f",&a[i][j]);
				}
			}
		break;
		default:
			for(i = 0;i < N;i++)
			{
				for(j = 0;j < N;j++)
				{
					a[i][j] = -10 + rand() %20; 
				}
			}
		break;
	}
	
	i = N/2;
	for(j = 0;j < N;j++)
	{
		a[i][j] = 1; 
	}
	printf("Before:\n");
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	
	for(i = 0;i < N;i++)
	{
	//	printf("line = %d \n",i);
		for(j = 0;j < N;j++)
		{
			if(a[i][j] > 0)
			{
				sum = sum + a[i][j];
				//printf("j = %d > 0 , sum = %d\n",j,sum);
				//break;
			}
			else
			{
				sum = 0;
				//printf("j = %d < 0, sum = %d\n",j,sum);
				//printf("j = %d< X\n",i);
				break;
			}
		}
		if(sum != 0)
		{
			//printf("i = %d < Y\n",i);
			break;
		}
	}
	//printf("%f\n",sum);
	if(sum == 0)
	{
		printf("This matrix dont have line with >0 elements");
		return 0;
	}
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			a[i][j] -= sum;
		}
	}
	
	printf("After:\n");
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
