#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
//void initboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = " ";
//		}
//	}
//}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("   "); /*省略初始化，利用三个空格，代替了%c及上一层的代码*/
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row-1) /*注意row-1与row的区别，在打印时会有所不同*/
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

