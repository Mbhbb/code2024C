#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

typedef unsigned int unit;

void test()
{
	static int a = 1;
	a++;
	printf("%d\n", a);
}

int main()
{
	//typedef static ¹Ø¼ü×Ö
	unsigned int a = 0;
	unit b = 1;
	printf("%d %d\n", a, b);

	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}

	return 0;
}