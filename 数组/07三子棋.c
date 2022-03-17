#include"07game.h"

int main() {
	int choose;
	do {
		menu();
		printf("请输入\n");
		int temp = scanf("%d", &choose);
		system("cls");
		switch (choose) {
		case 0: printf("退出成功！\n");
			break;
		case 1:game();
			break;
		default: printf("输入有误请重新输入\n");
			break;
		}
		system("pause");
		system("cls");
	} while (choose);//此方法通用
	return 0;
}