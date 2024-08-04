#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>

//¶¯Ì¬ÄÚ´æº¯Êý

int main()
{
	int* p = malloc(40);
	int* a = calloc(10, 4);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}

	for (int j = 0; j < 10; j++)
	{
		*(a + j) = j;
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", *(a + j));
	}
	int* ret = realloc(p, 80);

	free(p);
	free(a);
	free(ret);
	p = NULL;
	a = NULL;
	ret = NULL;
	return 0;
}