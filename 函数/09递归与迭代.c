#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int L_C(int n) {
	if (n > 1) {
		return n * L_C(n - 1);
	}
	else {
		return 1;
	}

}

int main() {
	//��n!,���������
	int n = 0;
	printf("������n\n");
	scanf("%d", &n);
	int a=L_C(n);
	printf("%d", a);
	return 0;
}