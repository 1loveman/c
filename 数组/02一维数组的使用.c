#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//һά�����ʹ��
	int arr[5] = { 0,1,2,3,4 };
	char arr1[] = "abcd";
	//�����±�
	//�������������׵�ַ�������ַ�����鳤�ȣ�����Ԫ�ظ�����
	//���׵�ַ
	printf("%p\n",arr);//����������������׵�ַ��&arr������������ĵ�ַ
	//������ĵ�ַ
	printf("%p\n", &arr);
	//�����鳤��
	sizeof(arr);
	printf("%d\n", sizeof(arr));
	//������Ԫ�صĸ���
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", len);


	//ʹ���±��������鸳ֵ
	//����
	arr[0] = 1;
	arr1[0] = 'a';
	//����
	for (int i = 0; i < len; i++) {
		printf("arr[%d] =%d\n",i, arr[i]);
	}
	for (int i = 0; i < strlen(arr1); i++) {
		printf("arr1[%d] =%c\n",i, arr1[i]);
	}
	//�鿴����ʵ�ʴ洢�ṹ
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] =%p\n", i, &arr[i]);//�ɴ˿�֪�����ǿ������洢��ͬ�������͵�һ���������ڴ�ռ䣻
	}
	return 0;
}