#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>

int is_turn(int n)
{
	int j = 0;
	for ( j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	//输出100--200之间的素数
	int i = 0;
	int count = 0;
	for ( i = 101; i < 200; i+=2)
	{
		//printf("%d ", i);
		if (is_turn(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);

	return 0;
}