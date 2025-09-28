#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d", &a);

	b = 1000 - a;
	int count = 0;

	count += b / 500;
	b = b % 500;

	count += b / 100;
	b = b % 100;

	count += b / 50;
	b = b % 50;

	count += b / 10;
	b = b % 10;

	count += b / 5;
	b = b % 5;

	count += b; 

	printf("%d\n", count);
	return 0;
}
