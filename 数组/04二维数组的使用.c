#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main() {
	//��ά�����ʹ��
	int arr[][4] = { {0} ,{0} };
	//��������������׵�ַ������������ĵ�ַ�������鳤�ȣ�������Ԫ�ظ�������������������
	// ���׵�ַ
	printf("�׵�ַΪ%p\n", arr);
	//����������ĵ�ַ
	printf("��������ĵ�ַΪ%p\n", &arr);//����ʱarr+1,�ӵ���һ��������ĳ���
	//�����鳤��
	sizeof(arr);
	printf("���鳤��Ϊ%d\n", sizeof(arr));
	//������Ԫ�ظ���
	int len = sizeof(arr) / sizeof(arr[0][0]);
	printf("����Ԫ�ظ���Ϊ%d\n", len);
	//������
	int h = sizeof(arr) / sizeof(arr[0]);
	printf("����Ϊ%d\n", h);
	//������
	int l = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("����Ϊ%d\n", l);

	//�±��������
	//���
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			printf(" %d \n", arr[i][j]);
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			printf(" ��ַΪ%p \n", &arr[i][j]);//��ά����ʵ������������һ���ڴ棻
		}
	}


	return 0;
}