#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("**** 1.PLAY  0.EXIT ****\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	/*initboard(board, ROW, COL);*/  /*可直接省略初始化，但要在打印中体现初始化*/
	displayboard(board, ROW, COL);


}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);  /*注意scanf内部不要加入\n，与printf进行区分*/
		switch (input)
		{
		  case 1:
			  game();
			  break;
		  case 0:
			  printf("退出游戏\n");
			  break;
		  default:
			  printf("输入错误，请重新输入\n");
			  break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}