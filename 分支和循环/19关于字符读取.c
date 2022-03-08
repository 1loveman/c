#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar从键盘上获取一个字符，本质上EOF是-1
		putchar(ch);//输出字符ch
	*/
	

	//输入密码并存储到字符串中
	char password[20] = {0};
	int ret=0;
	printf("请输入密码：\n");
	scanf("%s", password);//会陷入死循环，输入的密码被password读取，缓冲区还剩下\n被getchar读取造成死循环
	//解决方案，在scanf结束后加入一个getchar();即可
	//或者加上一个循环如下可清除多个无效符号
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
		printf("请确认(Y/N):\n");
		ret = getchar();
		if ('Y' == ret) {
			printf("确认成功\n");
		}
		else {
			printf("放弃确认");
		}
		return 0;
}