#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************************************\n");
	printf("*************        1.PLAY      ****************\n");
	printf("*************        0.EXIT      ****************\n");
	printf("*************************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//布置雷的信息
	char show[ROWS][COLS] = { 0 };//用户排查雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine,	ROW,  COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("开始游戏!\n");
				game();
				break;
			case 0:
				printf("游戏结束!\n");
				break;
			default:
				printf("输入错误,请重新输入!\n");
				break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}