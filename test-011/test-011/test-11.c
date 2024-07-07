#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>
#include <time.h>



void Game()
{
	int input = 0;
	int out = 0;
begin:
	printf("----------------------\n");
	printf("-----  猜数游戏  -----\n");
	printf("-----   1.请选择难度 -\n");
	printf("-----   0.退出   -----\n");
	printf("----------------------\n");
	scanf("%d", &out);

	switch (out)
	{
		case 1:
		{
			printf("-----请选择难度 --\n");
			printf("-----1.(1——10)  \n");
			printf("-----2.(1——100) \n");
			printf("-----3.(1——1000)\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
			{
				int find = rand() % 10;
				int over = 0;
				int i = 1;
				printf("%s\n", "你猜：");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "大了");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "小了");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "猜对了！");
						break;
					}
				}
				goto begin;
				break;
			}
			case 2:
			{
				int find = rand() % 100;
				int over = 0;
				int i = 1;
				printf("%s\n", "你猜：");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "大了");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "小了");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "猜对了！");
						break;
					}
				}
				goto begin;
				break;
			}
			case 3:
			{
				int find = rand() % 1000;
				int over = 0;
				int i = 1;
				printf("%s\n", "你猜：");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "大了");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "小了");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "猜对了！");
						break;
					}
				}
				goto begin;
				break;
			}
			default:
				printf("%s\n", "输入有误，请重新输入");
				Game();
			}
		}
		case 0:
		{
			printf("%s\n", "欢迎下次游玩！");
			break;
		}
		default:
		{
			printf("%s\n", "输入有误，请重新选择：");
			Game();
		}

	}
	
}

int login() {
	char count[20] = { 0 };
	char pas[20] = { 0 };
	printf("%s\n", "请输入账号：");
	scanf("%s", &count);
	printf("%s\n", "请输入密码：");
	scanf("%s", &pas);

	if (strcmp(count,"123456") == 0 && strcmp(pas, "123456") == 0)
	{
		//登录成功,开始游戏
		printf("%s\n", "登录成功！！");
		Game();
	}
	else
	{
		//登录失败，重新登录
		printf("%s\n", "账号或密码有误，请重新输入：");
		login();
	}
}

void banner()
{
	printf("----------------------\n");
	printf("-----  猜数游戏  -----\n");
	printf("-----   1.登录   -----\n");
	printf("-----   0.退出   -----\n");
	printf("----------------------\n");

	int a = 0;
	scanf("%d", &a);
	if (a == 1)
	{
		login();
	}
	else if (a == 0)
	{
		printf("%s\n", "欢迎下次游玩！");
	}else
	{
		printf("%s\n", "输入有误，请重新选择：");
		banner();
	}
}

int main()
{
	//猜数游戏
	time_t t;
	srand((unsigned) time(&t));
	banner();
	return 0;
}