#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//whileѭ�����
	//while(����){����Ϊ��ִ�е����}
	//break;ֱ�ӽ���ѭ��
	int i = 0;
	while (i < 10) {
		if (5 == i) {
			break;//break;ֱ�ӽ���ѭ��
		}
		printf("%d\n", i);
		i++;
	}
	i = 0;
	while (i < 10) {
		if (5 == i) {
			continue;//��������ѭ������i++λ�ù�ϵ�����׵�����ѭ������ʱ��Ҫ��i++д��continue֮ǰ
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}