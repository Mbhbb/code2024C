#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>

int main()
{
	/*int a = 1;
	int i = *(char*)&a;
	if (i)
	{
		printf("Ð¡¶Ë");
	}
	else
	{
		printf("´ó¶Ë");
	}*/

	char str[] = {0};
	int i = 0;
	int j = 0;
	int count = 0;
	scanf("%s", &str);
	int sz = sizeof(str) / sizeof(char);
	printf("%d\n", sz);

	for (i = 0; i < sz; i++)
	{
		for ( j = 1; j < sz; j++)
		{
			/*if (strcmp(str[i],str[j]) != 0)
			{
				count++;
			}*/
			printf("%c\n", str[i]);
			printf("%c\n", str[j]);
		}
		//printf("%c\n", str[i]);
	}
	printf("%s", str);
	printf("%c", str[0]);
	printf("\n%d\n", count);

	return 0;
}