#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int fact(int);

int main(void)
{
	printf("\n%d + %d = %d\n", a, b, add(a, b));
	printf("Factorial of %d is %d\n", 5, fact(5));
    return 0;
}

int add(int a, int b);
{
	return a + b;
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int sub(int a, int b);
{
	return a - b;
}

int mul(int a, int b);
{
	return a * b;
}


int div(int a, int b);
{
	return a / b;
}
