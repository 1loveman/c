#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int m_len(char* str) {
	
	if (*str != '\0') {
		return 1 + m_len(++str);//注意此处为表达式的值，如果用str++则死循环，爆栈；
	}
	else {
		return 0;
	}

}

int main() {
	//计算字符串长度，不借助临时变量；
	
	//规律 m_len(str)=1+m_len(str+1)
	char arr[] = "hello!";
	int len = m_len(arr);
	printf("字符串长度为%d", len);
	return 0;
}