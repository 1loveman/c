//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//int main() {
//	//求整数的二进制代码中1的个数
//
//	//常规  缺点只能求正整数
//	int nums;
//	scanf("%d", &nums);
//	int count = 0;
//	while (0!=nums) {
//		if (nums % 2 == 1) {
//			count++;
//		}
//		nums /= 2;
//	}
//	printf("%d\n", count);
//
//	//移位和按位与运算
//	int num;
//	int counts = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++) {//注意num>>1并不会改变num的值  除非num>>=1;
//		if (((num>>i) & 1) == 1) {
//			counts++;
//		}
//	}
//	printf("%d\n", counts);
//
//}
