#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
//1
void maximum()
{
	setlocale(0, "Ru");
	int n; float r, max;
	printf("¬ведите количество чисел \n");
	scanf_s("%d", &n);
	printf("¬ведите числа \n");
	scanf_s("%f", &r);
	max = r;
	for (int i = 1; i < n; i++)
	{
		scanf_s("%f", &r);
		if (r > max)
			max = r;
	}
	printf("%f", max);
	system("pause");
	return 0;
}
//2
void tf()
{
	setlocale(0, "Ru");
	int l, a, b, c;
	printf("¬ведите числа \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	l = a;
	for (int j = 1; j <= b - 1; j++)
	{
		a = a * l;
	}
	if (a == c)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	system("pause");
	return 0;
}
//3
void ascii()
{
	setlocale(0, "Ru");
	int n;
	printf("¬ведите число \n");
	scanf_s("%d", &n);
	printf("%d-%c", n, (char)n);
	system("pause");
	return 0;
}
//4
void example()
{
	setlocale(0, "Ru");
	int n, a, f;
	printf("¬ведите число \n");
	scanf_s("%d", &n);
	a = 1;
	f = 2;
	for (int e = 1; e <= n; e++)
	{
		if (e % 2 != 0)
		{
			for (int k = 1; k <= a; k++)
			{
				printf("%d ", k);
			}
			a = a + 2;
			printf("\n");
		}
		else
		{
			for (int r = f; r >= 1; r--)
			{
				printf("%d ", r);
			}
			f = f + 2;
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
void main()
{
	setlocale(0, "Ru");
	int count;
	printf("¬ведите номер задачи: ");
	scanf_s("%d", &count);
	switch (count)
	{
	case 1:
		maximum();
		break;
	case 2:
		tf();
		break;
	case 3:
		ascii();
		break;
	case 4:
		example();
		break;
	default:
		break;
	}
}