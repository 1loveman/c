#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main() {
	char input[20] = {0};
	system("shutdown -s -t 60");
AGAIN:
	printf("��ע�⣡��ĵ��Խ���60���ػ��������������������ȡ���ػ���\n");
	scanf("%s", input);
	if (strcmp(input, "��������") == 0) {
		system("shutdown -a");
	}
	else {
		goto AGAIN;
	}

	return 0;
}