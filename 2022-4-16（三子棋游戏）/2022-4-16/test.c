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
	/*initboard(board, ROW, COL);*/  /*��ֱ��ʡ�Գ�ʼ������Ҫ�ڴ�ӡ�����ֳ�ʼ��*/
	displayboard(board, ROW, COL);


}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);  /*ע��scanf�ڲ���Ҫ����\n����printf��������*/
		switch (input)
		{
		  case 1:
			  game();
			  break;
		  case 0:
			  printf("�˳���Ϸ\n");
			  break;
		  default:
			  printf("�����������������\n");
			  break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}