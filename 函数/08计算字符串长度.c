#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int m_len(char* str) {
	
	if (*str != '\0') {
		return 1 + m_len(++str);//ע��˴�Ϊ���ʽ��ֵ�������str++����ѭ������ջ��
	}
	else {
		return 0;
	}

}

int main() {
	//�����ַ������ȣ���������ʱ������
	
	//���� m_len(str)=1+m_len(str+1)
	char arr[] = "hello!";
	int len = m_len(arr);
	printf("�ַ�������Ϊ%d", len);
	return 0;
}