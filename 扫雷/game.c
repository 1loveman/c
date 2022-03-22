#include"game.h"

//菜单
void Menu() {
	printf("********************\n");
	printf("*****   扫雷   *****\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

//初始化
void Initboard(char board[ROWS][COLS],int rows,int cols,char set) {
	for (int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

//打印棋盘
void printboard(char board[ROWS][COLS], int row, int col) {
	for (int i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		printf("%d ", i);
		for (int j = 1; j <= col; j++) {
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}

}

//布雷
void setmine(char board[ROWS][COLS], int row, int col) {
	int nums = MINESUM;
	
	do {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			nums--;
		}
	} while (nums);
}

//扫雷
char resetmine(char board[ROWS][COLS],char board2[ROWS][COLS],int row,int col) {
	int x;
	int y;
	char a='0';
	do {
		printf("请输入坐标>");
		scanf("%d %d",&x,&y);
		if (0 < x && x < row + 1 && 0 < y && y < row + 1) {
			if (board2[x][y] == '*') {
				if (board[x][y] != '0') {
					board2[x][y] = '#'; 
					system("pause");
					system("cls");
					printboard(board2, ROW, COL);
					printf("你被炸死了，游戏结束\n");
					
					return board2[x][y];
				}
				else {
					for (int i = x - 1; i <= x + 1; i++) {
						for (int j = y - 1; j <= y + 1; j++) {
							if (board[i][j] == '1') {
								a++;
							}
						}
					}
					if (a != '0') {
						board2[x][y] = a;
						break;
					}
					else {
						for (int i = x - 1; i <= x + 1; i++) {
							for (int j = y - 1; j <= y + 1; j++) {
								if (board2[i][j]=='*') {
									board2[i][j] = ' ';
								}
							}
						}
						break;
					}
				}
			}


			
		}



	} while (1);
	return board2[x][y];
}
//游戏主体
void Game() {
	//创建盘11*11
	//布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//打印棋盘
	/*printboard(mine,ROW,COL);
	printboard(show,ROW,COL);*/
	//布雷
	setmine(mine, ROW, COL);
	char flag;
	do {
		//扫雷
		flag=resetmine(mine, show, ROW, COL);
		if (flag == '#') {
			system("pause");
			system("cls");
			break;
		}
		system("pause");
		system("cls");
		printboard(show, ROW, COL);
		
	} while (1);
	




}