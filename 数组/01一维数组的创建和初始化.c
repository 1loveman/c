#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//һά����Ĵ������ʼ��
	//��ʽ �������� ������[���鳤��]   []�б���Ϊ����;
	

	//��������
	int arr[5];
	char arr2[5];

	//����ĳ�ʼ��
	//������ͬʱ��ʼ��
	int arr3[5] = { 0,1,2,3,4 };
	int arr4[5] = {0};//ʣ�µ�ȫ��������
	int arr5[] = { 0,1,2,3,4 };//��д���鳤�ȣ��������Զ�����
	char arr_1[5] = { 'a','b',97};//ʣ�µ��Զ���0;�ַ�Ϊ\n   '97'д������
	char arr_3[] = { 'a','b','c','d','e' };
	char arr_2[] = "abcd";//�ַ��� �����Զ����һ��\0
	printf("%d\n", sizeof(arr_2));
	printf("%d\n", strlen(arr_2));//strlenֻ�����ַ�����ʼ��\0�ĳ��� ��\0������;
	//�������ʼ������ѭ��
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		scanf("%c", &arr2[i]);
	}
	
	return 0;
}#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//һά����Ĵ������ʼ��
	//��ʽ �������� ������[���鳤��]   []�б���Ϊ����;
	

	//��������
	int arr[5];
	char arr2[5];

	//����ĳ�ʼ��
	//������ͬʱ��ʼ��
	int arr3[5] = { 0,1,2,3,4 };
	int arr4[5] = {0};//ʣ�µ�ȫ��������
	int arr5[] = { 0,1,2,3,4 };//��д���鳤�ȣ��������Զ�����
	char arr_1[5] = { 'a','b',97};//ʣ�µ��Զ���0;�ַ�Ϊ\n   '97'д������
	char arr_3[] = { 'a','b','c','d','e' };
	char arr_2[] = "abcd";//�ַ��� �����Զ����һ��\0
	printf("%d\n", sizeof(arr_2));
	printf("%d\n", strlen(arr_2));//strlenֻ�����ַ�����ʼ��\0�ĳ��� ��\0������;
	//�������ʼ������ѭ��
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		scanf("%c", &arr2[i]);
	}
	
	return 0;
}