#ifndef __07GAME_H__
#define __07GAME_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

void menu();

void game();

void InitBoard(char board[ROW][COL], int row, int col);

void PrintBoard(char board[ROW][COL], int row, int col);

void PlayerInput(char board[ROW][COL], int row, int col);

void ComputerInput(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);

#endif