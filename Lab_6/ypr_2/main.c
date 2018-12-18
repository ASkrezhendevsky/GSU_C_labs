#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	int N, i, j;
	int sum = 0, oldsum = 0;
	printf("Enter N ");
	scanf("%d",&N);
	
	int *a;
	if (!(a=(int*)calloc(N*N,sizeof(int)))) 
	{
		puts("Not enough memory"); 
		getch();
		return; 
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			*((a+i*N)+j) = 1; //-10 + rand() %20; 
		}
	}
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%d\t",*((a+i*N)+j));
		}
		printf("\n\n");
	}
	for(i = 0;i < N;i++)
	{
		sum = 0;
		for(j = 0;j < N;j++)
		{
			sum += *((a+i*N)+j);
		}
		if(i == 0)
		{
			oldsum = sum;
		}
		if(oldsum != sum)
		{
			printf("This is not a magic square  ");
			free(a);
			return 0;
		}
	}
	for(i = 0;i < N;i++)
	{
		sum = 0;
		for(j = 0;j < N;j++)
		{
			sum += *((a+j*N)+i);
		}
		if(oldsum != sum)
		{
			printf("This is not a magic square  ");
			free(a);
			return 0;
		}
	}
	sum = 0;
	for(i = 0;i < N;i++)
	{
		sum += *((a+i*N)+i);
	}
	if(oldsum != sum)
	{
		printf("This is not a magic square  ");
		free(a);
		return 0;
	}
	sum = 0;
	for(i = 0;i < N;i++)
	{
		sum += *((a+(N-i-1)*N)+i);
	}
	if(oldsum != sum)
	{
		printf("This is not a magic square ");
		free(a);
		return 0;
	}
	
	printf("This is a magic square");
	
	free(a);
	return 0;
}
