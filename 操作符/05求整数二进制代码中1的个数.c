//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//int main() {
//	//�������Ķ����ƴ�����1�ĸ���
//
//	//����  ȱ��ֻ����������
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
//	//��λ�Ͱ�λ������
//	int num;
//	int counts = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++) {//ע��num>>1������ı�num��ֵ  ����num>>=1;
//		if (((num>>i) & 1) == 1) {
//			counts++;
//		}
//	}
//	printf("%d\n", counts);
//
//}
