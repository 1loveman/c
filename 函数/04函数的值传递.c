#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//��ֵ
void swap_(int n1, int n2) {//�βΣ���������ʱ���� �������Զ��ͷ�
	int temp = 0;
	temp = n2;
	n2 = n1;
	n1 = temp;
}
//��ַ
void swap(int* p1, int* p2) {
	int temp = 0;
	temp = (*p1);
	(*p1) = (*p2);
	(*p2) = temp;

}

int main() {
	int n1 = 0;
	int n2 = 0;
	//���������Ľϴ�ֵ;
	printf("������������\n");
	scanf("%d%d", &n1, &n2);
	printf("%d  %d\n",n1,n2);
	swap_(n1, n2);
	//�����ȶ��壬����������  ����������������main֮������Ҫ����
	printf("ֵ���� %d  %d\n", n1,n2 );//ʵ���ϲ�û����ɽ�������Ϊ�β����¿��ٵ���ʱ�ռ䣬��֮ǰ�Ĳ�ͬ;�βθı䲻��Ӱ��ʵ�Σ�
	swap(&n1, &n2);
	printf("ַ���� %d  %d\n", n1, n2);

	return 0;
}