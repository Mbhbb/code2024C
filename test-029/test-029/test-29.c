#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//�ļ��Ķ�д
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//	����һ���ǳ����bug��һ���ļ��Ĵ�����������
	//����r���� д��w���Ĳ���ֻ�ܶ�һ���򿪵��ļ�������
	//����ͻ�����������⡣

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

	//д
	//fputs("This is file.", fw);
	//fputc('a', fw);
	
	//char name[10] = "����";
	//int i = 20;
	//int w = 60;
	//fprintf(fw,"%s %d %d",name,i,w);

	//��
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