#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main() {
	//´òÓ¡ËØÊı¡¢100~200
	int j = 0;
	for (int i = 101; i < 201; i+=2) {
		for (j = 3; j <= sqrt(i);j+=2) {
			if (i % j==0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}