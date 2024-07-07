#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

 int add(int x, int y)
{
	 return ( x + y );
}

int main()
{
	//数组遍历
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	int a, b;
	printf("%s\n", "加法运算");
	scanf("%d %d", &a, &b);
	printf("%d\n", add(a, b));

	return 0;
}