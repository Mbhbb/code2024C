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
	printf("-----  ������Ϸ  -----\n");
	printf("-----   1.��ѡ���Ѷ� -\n");
	printf("-----   0.�˳�   -----\n");
	printf("----------------------\n");
	scanf("%d", &out);

	switch (out)
	{
		case 1:
		{
			printf("-----��ѡ���Ѷ� --\n");
			printf("-----1.(1����10)  \n");
			printf("-----2.(1����100) \n");
			printf("-----3.(1����1000)\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
			{
				int find = rand() % 10;
				int over = 0;
				int i = 1;
				printf("%s\n", "��£�");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "����");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "С��");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "�¶��ˣ�");
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
				printf("%s\n", "��£�");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "����");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "С��");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "�¶��ˣ�");
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
				printf("%s\n", "��£�");
				scanf("%d", &over);
				while (i) {
					if (over > find) {
						printf("%s\n", "����");
						scanf("%d", &over);
					}
					else if (over < find) {
						printf("%s\n", "С��");
						scanf("%d", &over);
					}
					else {
						printf("%s\n", "�¶��ˣ�");
						break;
					}
				}
				goto begin;
				break;
			}
			default:
				printf("%s\n", "������������������");
				Game();
			}
		}
		case 0:
		{
			printf("%s\n", "��ӭ�´����棡");
			break;
		}
		default:
		{
			printf("%s\n", "��������������ѡ��");
			Game();
		}

	}
	
}

int login() {
	char count[20] = { 0 };
	char pas[20] = { 0 };
	printf("%s\n", "�������˺ţ�");
	scanf("%s", &count);
	printf("%s\n", "���������룺");
	scanf("%s", &pas);

	if (strcmp(count,"123456") == 0 && strcmp(pas, "123456") == 0)
	{
		//��¼�ɹ�,��ʼ��Ϸ
		printf("%s\n", "��¼�ɹ�����");
		Game();
	}
	else
	{
		//��¼ʧ�ܣ����µ�¼
		printf("%s\n", "�˺Ż������������������룺");
		login();
	}
}

void banner()
{
	printf("----------------------\n");
	printf("-----  ������Ϸ  -----\n");
	printf("-----   1.��¼   -----\n");
	printf("-----   0.�˳�   -----\n");
	printf("----------------------\n");

	int a = 0;
	scanf("%d", &a);
	if (a == 1)
	{
		login();
	}
	else if (a == 0)
	{
		printf("%s\n", "��ӭ�´����棡");
	}else
	{
		printf("%s\n", "��������������ѡ��");
		banner();
	}
}

int main()
{
	//������Ϸ
	time_t t;
	srand((unsigned) time(&t));
	banner();
	return 0;
}