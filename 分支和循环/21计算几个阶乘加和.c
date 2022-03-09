#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int JC(int n) {
	int temp = 1;
	for (int i = 1; i < n + 1; i++) {
		temp = temp * i;
	}
		return temp;
}

int main(){
	int tmp = 0;
	for (int n = 1; n < 11; n++) {
		tmp += JC(n);
	}
	printf("%d\n", tmp);
	return 0;
}