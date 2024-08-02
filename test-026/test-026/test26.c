#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//联合体
#include <stdio.h>

union UN
{
	char c;
	int i;
};

int fun1()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	union UN u;
	printf("%d\n", sizeof(u));

	int ret = fun1();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}