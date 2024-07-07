#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>


void Swp(int* a, int* b)
{
	int z = *a;
	*a = *b;
	*b = z;
}

int main()
{

	//#include <stdlib.h>
	//#include <Windows.h>
	//#include <string.h>


	/*char arr1[] = "welcome to mbh!";
	char arr2[] = "###############";

	int begin = 0;
	int end = (sizeof(arr1) / sizeof(char)) - 2;

	while (begin <= end)
	{
		arr2[begin] = arr1[begin];
		arr2[end] = arr1[end];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		begin++;
		end--;
	}
	printf("%s\n", arr2);*/


	/*int i = 0;
	char pas[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("%s\n", "请输入密码：");
		scanf("%s", pas);
		if (strcmp(pas, "mbh123") == 0) {
			printf("%s\n", "登录成功！");
			break;
		}
	}
	if (i == 3)
	{
		printf("%s\n", "3次密码输入错误，退出程序！");
	}*/

	//函数

	int a, b;
	printf("%s\n", "请输入交换的值：");
	scanf("%d %d", &a, &b);
	printf("交换前：%d %d\n", a, b);
	Swp(&a,&b);
	printf("交换后：%d %d\n", a, b);


	return 0;
}