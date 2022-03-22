#include"game.h"

int main() {
	int input = 0;
	do {
		srand((unsigned int)time(NULL));
		Menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input) {
		case 1: Game();
			break;
		case 0: printf("退出游戏！\n");
			break;
		default: printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}