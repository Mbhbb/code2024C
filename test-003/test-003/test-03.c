#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	//判断语句

	int i = 0;
	printf("%s\n", "请选择：");
	scanf("%d", &i);
	if (i == 1)
	{
		printf("%s\n","获得卖红薯的offer");
		//循环语句
		int count = 0;
		while (count < 100) {
			count++;
			printf("%s %d %s\n", "第", count, "个");
		}
		if (count >= 100) {
			printf("%s\n", "可以卖红薯了");
		}
	}
	else
	{
		printf("%s\n", "直接卖红薯");
	}

	

	return 0;
}