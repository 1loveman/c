#include"game.h"

int main() {
	int input = 0;
	do {
		srand((unsigned int)time(NULL));
		Menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1: Game();
			break;
		case 0: printf("�˳���Ϸ��\n");
			break;
		default: printf("������������������\n");
			break;
		}
	} while (input);
	return 0;
}