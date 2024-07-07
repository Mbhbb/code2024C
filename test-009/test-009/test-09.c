#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	//for&whlie&do-whlie循环

	//1.计算阶乘的和
	//int i = 1;
	//int n = 10;//1 2 6 24
	//int num = 1;
	//int ret = 0;
	//for(i= 1; i<=n ; i++)
	//{
	//	num *= i;
	//	ret += num;
	//}
	//printf("%d %d", num,ret);

	//2.在一个有序数组中查找某个具体的数字
	//二分法

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int begin = 0;
	int end = (sizeof(arr)/sizeof(int)) - 1;
	int find = 1;

	while (begin <= end)
	{
		int mid = (begin + end) / 2;
		if (arr[mid] > find)
		{
			end = mid - 1;
		}
		else if (arr[mid] < find)
		{
			begin = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if (begin > end)
	{
		printf("找不到该元素");
	}
	
	return 0;
}