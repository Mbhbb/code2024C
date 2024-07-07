#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void out(unsigned int arr) 
{
	if (arr > 9)
	{
		out(arr / 10);
	}
	printf("%d ", arr % 10);
}
