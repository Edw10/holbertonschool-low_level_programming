#include <stdio.h>

/**
 * main - fibonacci
 *
 * fibo - realiza suma recursiva valor siguiente con anterior
 * @n: numero fibonnaci a evaluar
 * Return: 0
 */

int fibo(int n);

int main(void)
{
	fibo(50);
	return (0);
}

/**
 * fibo - realiza suma recursiva valor siguiente con anterior
 * @n: numero fibonnaci a evaluar
 * Return: 1 if n==1 2 if n==2 or the sum if n> 2
 */

int fibo(int n)
{
	int f;

	if (n > 2)
		f = fibo(n - 1) + fibo(n - 2);
	if (n == 2)
	{
		printf(", %d", 2);
		return (2);
	}
	else
	{
		printf(", %d", 1);
		return (1);
	}
	printf(", %d", f);
	return (f);

}
