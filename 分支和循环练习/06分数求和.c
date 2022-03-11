#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//º∆À„1/1+1/2+++1/100;
	double sum = 0;
	for (int i = 1; i < 101; i++) {
		sum += (1.0 / i);
	}
	printf("%lf\n", sum);
	return 0;
}