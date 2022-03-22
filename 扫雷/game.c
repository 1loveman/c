#include"game.h"

//�˵�
void Menu() {
	printf("********************\n");
	printf("*****   ɨ��   *****\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

//��ʼ��
void Initboard(char board[ROWS][COLS],int rows,int cols,char set) {
	for (int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

//��ӡ����
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

//����
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

//ɨ��
char resetmine(char board[ROWS][COLS],char board2[ROWS][COLS],int row,int col) {
	int x;
	int y;
	char a='0';
	do {
		printf("����������>");
		scanf("%d %d",&x,&y);
		if (0 < x && x < row + 1 && 0 < y && y < row + 1) {
			if (board2[x][y] == '*') {
				if (board[x][y] != '0') {
					board2[x][y] = '#'; 
					system("pause");
					system("cls");
					printboard(board2, ROW, COL);
					printf("�㱻ը���ˣ���Ϸ����\n");
					
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
//��Ϸ����
void Game() {
	//������11*11
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//��ӡ����
	/*printboard(mine,ROW,COL);
	printboard(show,ROW,COL);*/
	//����
	setmine(mine, ROW, COL);
	char flag;
	do {
		//ɨ��
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