#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//��1~100��9�����˶��ٴΣ�
	int j = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 10 == 9) {
			j++;
		}
		if (i / 10 == 9) {
			j++;
		}
	}
	printf("������%d��\n", j);
	return 0;
}