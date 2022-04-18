#include<stdio.h>

int main(){
	//字符指针--用于存放字符地址或者字符串首地址。
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