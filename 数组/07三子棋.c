#include"07game.h"

int main() {
	int choose;
	do {
		menu();
		printf("������\n");
		int temp = scanf("%d", &choose);
		system("cls");
		switch (choose) {
		case 0: printf("�˳��ɹ���\n");
			break;
		case 1:game();
			break;
		default: printf("������������������\n");
			break;
		}
		system("pause");
		system("cls");
	} while (choose);//�˷���ͨ��
	return 0;
}