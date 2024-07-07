#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <time.h>
#include "game.h"

void banner()
{
	printf("---------------------\n");
	printf("-----   走棋   ------\n");
	printf("-----  1.play  ------\n");
	printf("-----  0.exit  ------\n");
	printf("---------------------\n");
}

int main()
{
	//走棋游戏
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
				printf("欢迎下次游玩！");
				break;
			default:
				printf("输入错误！\n");
				break;
		}
	} while (input);
}