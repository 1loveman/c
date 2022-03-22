#ifndef __GAME_H__
#define __GAME_H__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINESUM 10

void Menu();
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void printboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
char resetmine(char board[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
void Game();



#endif