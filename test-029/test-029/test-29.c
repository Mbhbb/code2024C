#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//文件的读写
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//	遇到一个非常大的bug，一个文件的打开造作，对于
	//读‘r’或 写‘w’的操作只能对一个打开的文件流操作
	//否则就会出现乱码问题。

	//FILE* fw = fopen("test.txt", "w");
	FILE* fr = fopen("test.txt", "r");
	if (fr == NULL)
	{
		perror("fopen-r");
		return 1;
	}

	/*if (fw == NULL)
	{
		perror("fopen-w");
		return 1;
	}*/

	//写
	//fputs("This is file.", fw);
	//fputc('a', fw);
	
	//char name[10] = "张三";
	//int i = 20;
	//int w = 60;
	//fprintf(fw,"%s %d %d",name,i,w);

	//读
	//int ret = fgetc(fr);
	//printf("%c ", ret);
	char name[10];
	int i, w;
	fscanf(fr,"%s %d %d", &name, &i, &w);
	printf("%s %d %d", name, i, w);
	//fclose(fw);
	//fw = NULL;
	fclose(fr);
	fr = NULL;
	return 0;
}