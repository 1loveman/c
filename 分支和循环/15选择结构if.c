#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������ֽṹ
//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ
//����ԷֺŽ�β
int main(){
	//if������ֽṹ
	int age;
	scanf("%d", &age);

	//if(���ʽ1){���ʽ1Ϊ��ִ�д˴����}
	if (age < 18) {						//���ж��������д��{�����}����
		printf("δ����\n");
	}

	//if(���ʽ1){���ʽ1Ϊ��ִ�д˴����}else{���ʽΪ��ִ�е����}
	if (age < 18) {
		printf("δ����\n");
	}
	else {
		printf("�ѳ���\n");
	}

	//if(���ʽ1){���ʽ1Ϊ��ִ�д˴����}else if�����ʽ2��{���ʽ1Ϊ��ִ�е����}else{���ʽ12����Ϊ��ִ�е����}
	if (age < 18) {
		printf("δ����\n");
	}
	else if (age < 60) {
		printf("׳��\n");
	}
	else {
		printf("����\n");
	}

	int a= 0;
	int b = 2;
	if (a == 1)//�˴�Ϊ�˱��⽫==д��=����������дǰ��1==a;
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	//�˴������,��Ϊelseֻ����֮ǰ�����һ��if���
	return 0;
}
