#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	srand((int)time(0));
	printf("3: 石头  2:剪刀  1:布\n");
	int pc, player;
	int count_pc = 0;
	int count_player = 0;
	while (1)
	{
		printf("请输入: ");
		scanf("%d", &pc);
		player = rand() % 3 + 1;
		if (player == pc)
		{
			printf("平局!\n");
		}
		else if (player == 1)
		{
			if (pc == 3)
			{
				printf("玩家胜一场!\n");
				count_player++;
			}
			else if (pc == 2)
			{
				printf("电脑胜一场!\n");
				count_pc++;
			}
		}
		else if (player > pc)
		{
			printf("玩家胜一场!\n");
			count_player++;
		}
		else if (player < pc)
		{
			printf("电脑胜一场!\n");
			count_pc++;
		}
		if (count_player - count_pc == 2)
		{
			printf("玩家胜利!\n");
			break;
		}
		if (count_pc - count_player == 2)
		{
			printf("电脑胜利!\n");
			break;
		}
		
	}

}
int main()
{
	int flag = 0;
	do
	{
		int flag = 0;
		printf("*************************\n");
		printf("** 1.Play      0. Exit **\n");
		printf("*************************\n");
		scanf("%d", &flag);
		switch (flag)
		{
		case 1:
			printf("开始游戏!\n");
			game();
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误,退出游戏!\n");
		}
	} while (flag);
}