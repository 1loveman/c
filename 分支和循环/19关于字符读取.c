#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar�Ӽ����ϻ�ȡһ���ַ���������EOF��-1
		putchar(ch);//����ַ�ch
	*/
	

	//�������벢�洢���ַ�����
	char password[20] = {0};
	int ret=0;
	printf("���������룺\n");
	scanf("%s", password);//��������ѭ������������뱻password��ȡ����������ʣ��\n��getchar��ȡ�����ѭ��
	//�����������scanf���������һ��getchar();����
	//���߼���һ��ѭ�����¿���������Ч����
	/*
	* int ch=0;
	while(ch=getchar()!='\n'){
	
	;
	}
	*/
	int ch = 0;
	while (ch = getchar() != '\n') {
		;
	}
		printf("��ȷ��(Y/N):\n");
		ret = getchar();
		if ('Y' == ret) {
			printf("ȷ�ϳɹ�\n");
		}
		else {
			printf("����ȷ��");
		}
		return 0;
}