#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <time.h>
#include "game.h"

void banner()
{
	printf("---------------------\n");
	printf("-----   ����   ------\n");
	printf("-----  1.play  ------\n");
	printf("-----  0.exit  ------\n");
	printf("---------------------\n");
}

int main()
{
	//������Ϸ
	time_t t;
	srand((unsigned) &t);

	int input = 0;
	do
	{
		banner();
		printf("---->");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��ӭ�´����棡");
				break;
			default:
				printf("�������\n");
				break;
		}
	} while (input);
}