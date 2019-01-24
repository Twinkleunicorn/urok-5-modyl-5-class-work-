#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

void task1()
{
	const int n = 5;
    int A[n][n];
	int P=1;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = 0 + rand()%12;
			printf("[%d][%d]=%d\t\n",i,j, A[i][j]);
		}

	}
	
		for (size_t j = 0; j < n; j++)
		{
			if (A[1][j]==0)
			{
				P = 0*A[1][j];
				
			}
			else
			{
				P = P * A[1][j];
			}
		}

	printf("Произведение чисел первой строки: %d\n", P);
}

void task3()
{
	const int m = 5,n=10;
	int A[m][n];
	int sum=0;
	int min = 10;

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = 1 + rand() % 14;
			printf("[%d][%d]=%d\t", i, j, A[i][j]);

			sum += A[i][j];
		}

		if (sum < min)
			min = sum;
	}

	printf("\n\n\n");

	printf("Min element:%d\n", sum);
}

void task5()
{
	const int n = 4,m=5;
	int A[n][n];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = 1 + rand() % 10
				;
			printf("[%d][%d]=%d\t", i, j, A[i][j]);
		}
	}
	printf("\n\n\n");
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			for (size_t l = i+1; l <n ; l++)
			{
				for (size_t k = j+1; k < m; k++)
				{
					if (A[i][j] == A[l][k] )
					{
						printf("[%d][%d]:%d\t",i,j, A[i][j]);
					}
				}
			}
		}
	}
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("Введите номер задачи: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
			break;
		case 3:
		{
			task3();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		default:
		break;
		}

		printf("Хотите продолжить?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}