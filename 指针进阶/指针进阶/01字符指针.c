#include<stdio.h>

int main(){
	//�ַ�ָ��--���ڴ���ַ���ַ�����ַ����׵�ַ��
	char a='a';
	char* p=&a;
	char arr[]="hello";
	printf("%c\n",*p);
	p=arr;
	printf("%s\n",p);
	p="hello,world";
	printf("%s\n",p);
	return 0;
}