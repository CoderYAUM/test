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
			printf("   "); /*ʡ�Գ�ʼ�������������ո񣬴�����%c����һ��Ĵ���*/
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row-1) /*ע��row-1��row�������ڴ�ӡʱ��������ͬ*/
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

