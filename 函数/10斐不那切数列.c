#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ�
int fi(int n){
	if (n <= 2) {
		return 1;
	}
	else {
		return fi(n - 1) + fi(n - 2);
	}
}

//ѭ��
int fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	return c;
}

int main() {
	//��n!,���������
	int n = 0;
	printf("������n\n");
	scanf("%d", &n);
	int a = fi(n);
	printf("%d", a);
	a = fib(n);
	printf("%d", a);
	return 0;
}