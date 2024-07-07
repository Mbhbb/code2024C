#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	//运算符
	auto int a = 7;
	int b = 2;
	int num01 = a + b;//加
	int num02 = a - b;//减
	int num03 = a * b;//乘
	int num04 = a / b;//除
	int num05 = a % b;//取模

	printf("%d %d %d %d %d\n", num01, num02, num03, num04,num05);
	float num06 = 7.0 / 2;
	printf("%0.1f\n", num06);

	int i = 0;
	if (i)//i 不正确；i=3 正确；i==0正确； 
	{
		printf("正确\n");
	}
	else
	{
		printf("不正确\n");
	}

	int j = 0;
	int k = 0;
	if (j && k) {
		printf("正确\n");
	}
	else
	{
		printf("不正确\n");
	}

	if (j || k) {
		printf("正确\n");
	}
	else
	{
		printf("不正确\n");
	}

	return 0;
}