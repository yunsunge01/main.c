#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	
int a[6];

void printArr()
{
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int random()
{
	int i;
	int j;
	for (i = 0; i < 6; i++)
	{
		a[i] = rand() % 6 + 1;
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				i--;
				break;
			}
		}
	}
}

int change()
{
	int i;
	int j;
	int temp;
	for (i = 0; i < 6; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
}

//int main()
//{
//
//	int i;
//	int j;
//	int temp;
//	srand(time(NULL));
//
//
//	random();
//
//	printArr();
//
//	change();
//
//	printArr();
//}

int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d", factorial(n));
}