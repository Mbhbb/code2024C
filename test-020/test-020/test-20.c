#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>

//无重复字符串的最大长度

int mbh(char * str)
{
	/*int i = 0;
	int j = 0;
	int right = 0;
	int left = 0;
	int max = 0;
	int same = 0;
	int update = 0;*/
	int i = 0, j = 0, update = 0, right = 0, left = 0, same = 0;
	int max = 0;
	int len = strlen(str);

	for ( i = 0; i < len; i++)
	{
		if (left < right)
		{
			same = 0;
			for ( j = left; j < right; j++)
			{
				if (str[j] == str[right])
				{
					same = 1;
					break;
				}
			}
			if (same == 1)
			{
				left = j + 1;
			}
		}
		update = (right - left + 1);
		if (max < update)
		{
			max = update;
		}
		right++;
	}

	return max;

	//int i, j, max = 0;
	//int left = 0, right = 0;
	//int same = 0;
	//int len = strlen(s);
	//for (i = 0; i < len; i++) {
	//	if (left < right) {
	//		same = 0;
	//		for (j = left; j < right; j++) {
	//			if (s[j] == s[right]) {//若有重复字符，将same置1并跳出循环；
	//				same = 1;
	//				break;
	//			}
	//		}
	//		if (same == 1) {//若有重复字符将left右移
	//			left = j + 1;
	//		}
	//	}
	//	max = max < (right - left + 1) ? (right - left + 1) : max;
	//	right++;//right右移继续判断
	//}
	//return max;
}

int main()
{
	char str[] = { "abcabcd" };
	int count = mbh(str);
	printf("%d", count);
	return 0;
}