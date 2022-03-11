#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main() {
	char input[20] = {0};
	system("shutdown -s -t 60");
AGAIN:
	printf("请注意！你的电脑将在60秒后关机，如果输入张涛是猪，则取消关机！\n");
	scanf("%s", input);
	if (strcmp(input, "张涛是猪") == 0) {
		system("shutdown -a");
	}
	else {
		goto AGAIN;
	}

	return 0;
}