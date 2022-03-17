#include"07game.h"

//菜单
void menu() {
	printf("**********************\n");
	printf("******三子棋游戏******\n");
	printf("******1开始游戏*******\n");
	printf("******0退出游戏*******\n");
	printf("**********************\n");
}
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
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
//玩家下棋
void PlayerInput(char board[ROW][COL],int row ,int col) {
	do {
		int x;
		int y;
		printf("玩家请输入坐标\n");
		int a=scanf("%d %d", &x, &y);
		//判断坐标是否合法
		if (0 < x && x < row+1 && 0 < y && y < col+1 && board[x - 1][y - 1] == ' ') {
			board[x - 1][y - 1] = '*';
			system("pause");
			system("cls");
			break;
		}
		printf("坐标非法,请重新输入\n");
		system("pause");
		system("cls");
		PrintBoard(board, ROW, COL);
	} while (1);
}
//电脑下棋
void ComputerInput(char board[ROW][COL], int row, int col) {
	srand((unsigned int)time(NULL));
	do{
		int x = rand() % row;
		int y = rand() % col;
		//判断坐标是否合法
		if (0 <= x && x < row && 0 <= y && y < col && board[x][y] == ' ') {
			board[x][y] = '#';
			system("pause");
			system("cls");
			break;
		}
	} while (1);
}
//判断谁赢
char IsWin(char board[ROW][COL], int row, int col) {
	//赢
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
	//继续
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return "C";
			}
		}
	}
	//平局
	return 'Q';
}
//game
void game() {
	//首先创建棋盘
	char board[ROW][COL] = { 97 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);
	do {
		//玩家下棋
		PlayerInput(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		//判断玩家是否赢
		char ret = IsWin(board, ROW, COL);
		if (ret == '*') {
			printf("玩家赢\n");
			break;
		}
		else if (ret == '#') {
			printf("电脑赢\n");
			break;
		}
		else if (ret == 'Q') {
			printf("平局\n");
			break;
		}
		//电脑下棋
		ComputerInput(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret == '*') {
			printf("玩家赢\n");
			break;
		}
		else if (ret == '#') {
			printf("电脑赢\n");
			break;
		}
		else if (ret == 'Q') {
			printf("平局\n");
			break;
		}
	} while (1);
}

