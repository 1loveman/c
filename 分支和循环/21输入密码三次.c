#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main() {
	int i = 0;
	char s[20] = { 0 };
	for (i=0; i < 3; i++) {
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%s", s);
		if (strcmp(s, "123456") == 0) {
			printf("ÃÜÂëÕýÈ·£¡\n");
			break;
		}
		else {
			printf("ÃÜÂë´íÎó£¡\n");
		}
	}
	if (i == 3) {
		printf("Èý´ÎÃÜÂë´íÎóÒÑËø¶¨");
	}
	return 0;
}