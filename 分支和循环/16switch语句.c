#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//switch���
	/*
	switch(���ͱ��ʽ){
		case �����ַ��ͳ��������;
		break;
		case �����ַ��ͳ��������;
		break;
		default:���;//������Ҫdefault���п���;
		break;
	}
	*/
	int age;
	printf("��������ͣ�\n");
	scanf("%d", &age);
	switch (age) {
	case 10:printf("С����\n");
			break;
	case 20:printf("����\n");
		break;
	case 30:printf("׳��\n");
		break;
	default:printf("����\n");
		break;
	}
	//10-20���гɳ��ڶ���������
	switch (age) {
	case 10:
	case 20:
	case 30:printf("�ɳ���\n");
		break;
	default:printf("������\n");
		break;
	}
	return 0;
}