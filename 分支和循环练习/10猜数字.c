#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

int main() {
	srand((unsigned)time(NULL));
	int ret = rand() % 100 + 1;
	int val=0;
	do {
		printf("������²������\n");
		scanf("%d", &val);
		if (val > ret) {
			printf("�´���\n");
		}
		else if(val<ret) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
		}
	} while (val != ret);
	return 0;
}