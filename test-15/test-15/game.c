#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <Windows.h>

#define ROW 3
#define COL 3

//初始化
void init(char arr[ROW][COL], int row, int col)
{
	int j = 0;
	int k = 0;
	for (j = 0; j < ROW; j++)
	{
		for (k = 0; k < COL; k++)
		{
			arr[j][k] = ' ';
		}
	}
}

//打印棋盘
void print(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (l = 0; l < ROW; l++)
	{

		printf("  %d ", l);
	}
	printf("\n");

	for (i = 0; i < COL; i++)
	{
		//printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);

		printf("%d", i);
		for ( j = 0; j < ROW; j++)
		{
			
			printf(" %c ", arr[i][j]);
			if(j < ROW-1)
				printf("|");
		}
		printf("\n");

		printf(" ");
		if (i < ROW - 1) {
			for ( k = 0; k < COL; k++)
			{
				printf("---");
				if(k < COL-1)
					printf("|");
			}
		}
		printf("\n");
			
	}
}

//玩家走棋
void player(char arr[ROW][COL], int row, int col)
{

	int r = 0;
	int c = 0;
	printf("轮到您请走棋--->");
	scanf("%d %d", &c, &r);
	if (arr[r][c] == ' ')
	{
		arr[r][c] = '*';
	}
	else
	{
		printf("已有棋子！");
		player(arr, ROW, COL);
	}
	//打印棋盘
	print(arr,ROW,COL);
}

//电脑走棋
void computer(char arr[ROW][COL], int row, int col)
{
	int r = rand() % 3;
	int c = rand() % 3;
	int input = 1;
	printf("AI正在走棋--->\n");
	//printf("%d %d", r, c);
	Sleep(2000);
	if (arr[r][c] == ' ')
	{
		arr[r][c] = '#';
	}
	else
	{
		computer(arr, ROW, COL);
	}
}

//判断输赢
int isWinner(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for ( i = 0; i < col; i++)
	{
		//竖
		if (arr[0][i] == arr[2][i] && arr[1][i] == arr[2][i] && arr[i][i] != ' ')
		{
			if (arr[0][i] == '*')
			{
				printf("恭喜你赢了！\n");
				return 0;
			}
			if (arr[0][i] == '#')
			{
				printf("再接再厉！\n");
				return 0;
			}
			return 1;
		}
		//横
		if (arr[i][0] == arr[i][2] && arr[i][1] == arr[i][2] && arr[i][i] != ' ')
		{
			if (arr[0][i] == '*')
			{
				printf("恭喜你赢了！\n");
				return 0;
			}
			if (arr[0][i] == '#')
			{
				printf("再接再厉！\n");
				return 0;
			}
			return 1;
		}
		//斜
		if (arr[i][i] == arr[2][2] && arr[1][1] == arr[1][1] && arr[1][1] != ' ')
		{
			if (arr[0][i] == '*')
			{
				printf("恭喜你赢了！\n");
				return 0;
			}
			if (arr[0][i] == '#')
			{
				printf("再接再厉！\n");
				return 0;
			}
			return 1;
		}
		if (arr[2][0] == arr[1][1] && arr[0][2] == arr[1][1] && arr[1][1] != ' ')
		{
			if (arr[0][i] == '*')
			{
				printf("恭喜你赢了！\n"); 
				return 0;
			}
			if (arr[0][i] == '#')
			{
				printf("再接再厉！\n");
				return 0;
			}
			return 1;
		}

	}
	

}

void game()
{
	char arr[ROW][COL] = { 0 };
	int input = 1;
	int i = 0;

	printf("开始游玩\n");
	//游戏初始化
	init(arr, ROW, COL);
	//打印棋盘
	print(arr,ROW,COL);
	while (input)
	{
		//玩家走棋
		player(arr, ROW, COL);
		//	判断输赢
		input = isWinner(arr, ROW, COL);
		if (input == 0)
		{
			break;
		}
		//电脑走棋
		computer(arr, ROW, COL);
		//打印棋盘
		print(arr, ROW, COL);
		//	判断输赢
		input = isWinner(arr, ROW, COL);
	}

}