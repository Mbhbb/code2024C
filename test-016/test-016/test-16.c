#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include "game.h"


void banner()
{
	printf("------ ɨ�� -----\n");
	printf("----- 1.play ----\n");
	printf("----- 0.exit ----\n");
	printf("-----------------\n");
	printf("---->>");
}

int main()
{
	//ɨ��

	int input = 0;

	do
	{

		banner();
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
			printf("ѡ�����");
			break;
		}
	} while (input);

	return 0;
}