#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include "game.h"


void banner()
{
	printf("------ É¨À× -----\n");
	printf("----- 1.play ----\n");
	printf("----- 0.exit ----\n");
	printf("-----------------\n");
	printf("---->>");
}

int main()
{
	//É¨À×

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
			printf("»¶Ó­ÏÂ´ÎÓÎÍæ£¡");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¡");
			break;
		}
	} while (input);

	return 0;
}