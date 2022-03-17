#include"07game.h"

//�˵�
void menu() {
	printf("**********************\n");
	printf("******��������Ϸ******\n");
	printf("******1��ʼ��Ϸ*******\n");
	printf("******0�˳���Ϸ*******\n");
	printf("**********************\n");
}
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			
		}
		printf("\n");
	}
}
//�������
void PlayerInput(char board[ROW][COL],int row ,int col) {
	do {
		int x;
		int y;
		printf("�������������\n");
		int a=scanf("%d %d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (0 < x && x < row+1 && 0 < y && y < col+1 && board[x - 1][y - 1] == ' ') {
			board[x - 1][y - 1] = '*';
			system("pause");
			system("cls");
			break;
		}
		printf("����Ƿ�,����������\n");
		system("pause");
		system("cls");
		PrintBoard(board, ROW, COL);
	} while (1);
}
//��������
void ComputerInput(char board[ROW][COL], int row, int col) {
	srand((unsigned int)time(NULL));
	do{
		int x = rand() % row;
		int y = rand() % col;
		//�ж������Ƿ�Ϸ�
		if (0 <= x && x < row && 0 <= y && y < col && board[x][y] == ' ') {
			board[x][y] = '#';
			system("pause");
			system("cls");
			break;
		}
	} while (1);
}
//�ж�˭Ӯ
char IsWin(char board[ROW][COL], int row, int col) {
	//Ӯ
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ') {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ') {
			return board[0][i];
		}
		if (board[0][0] == board[1][1] && board[1][1]  == board[2][2] && board[2][2] != ' ') {
			return board[0][0];
		}
		if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ') {
			return board[0][0];
		}
	}
	//����
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return "C";
			}
		}
	}
	//ƽ��
	return 'Q';
}
//game
void game() {
	//���ȴ�������
	char board[ROW][COL] = { 97 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);
	do {
		//�������
		PlayerInput(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		char ret = IsWin(board, ROW, COL);
		if (ret == '*') {
			printf("���Ӯ\n");
			break;
		}
		else if (ret == '#') {
			printf("����Ӯ\n");
			break;
		}
		else if (ret == 'Q') {
			printf("ƽ��\n");
			break;
		}
		//��������
		ComputerInput(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret == '*') {
			printf("���Ӯ\n");
			break;
		}
		else if (ret == '#') {
			printf("����Ӯ\n");
			break;
		}
		else if (ret == 'Q') {
			printf("ƽ��\n");
			break;
		}
	} while (1);
}

