#include<stdio.h>
int strlen_(char* str) {
	char* end = str;
	while (*end != (char)'\0') {
		end++;
	}
	return end - str;
}


int main() {
	//ָ������
	//ָ��+-����
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("%d\n", *(p + i));
		//p+1��������p=p+1; 
	}
	
	//ָ��-ָ��
	//�õ������м�Ԫ�صĸ���
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p1 = arr1;
	len = sizeof(arr1) / sizeof(arr1[0]);//�м�Ԫ�ظ�������Ҫָ��ͬһ�ռ�
	printf("%d\n", &arr[9] - &arr[0]);
	char arr3[] = "hello";
	len = strlen_(arr3);
	printf("len=%d\n",len);
	//ָ��Ĺ�ϵ����
	//��ָ��Ƚϴ�С//C���Թ涨����ָ�����ָ�������Ԫ�ص����һ��Ԫ�ص���һ��Ԫ�ص�ַ�Ƚ�

	//����ָ��
	//��ʽint**ָ����;
	int aa = 10;
	int* pp = &aa;
	int** ppp = &pp;
	int*** pppp = &ppp;//����ָ��
	//ʹ�ý�����
	*ppp;//Ϊpp�ĵ�ַ
	**ppp;//��Ϊaa


	//ָ������--���ָ�������
	int a;
	int b;
	int c;
	int* arr4[3] = { &a,&b,&c };
	//����ָ��--��������ָ��

	return 0;
}