#include<stdio.h>

//����---������һ�����������Ҫ�ӷֺ�
struct stu {//�����ṹ�����ͣ���ռ�ÿռ䣬ʵ����ʱ��ռ��ռ�
	char name[20];
	short age;
	char sex[5];
	int score;

};

struct stu1 {
	char name[20];
	

}s11;//�ڶ����ͬʱ������ȫ�ֱ���--��������ȫ�ֱ���

typedef struct stu2 {//������������������--��struct stu ��ͬ��stu2//��Ϊ�������Ҫ�ֺ�
				//��ʽ typedef ԭ����  ������;
	short age;
	struct stu1 s22;
}stu2;


int main() {
	//�ṹ��---��һЩֵ�ļ��ϣ��ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
	//�ṹ������
	//struct---�ؼ���   stu----�ṹ���ǩ   struct stu-----�ṹ������

	struct stu s;//ʵ����  �ֲ�����
	struct stu s1 = { "����",10,"Ů",100 };//�ṹ������ĳ�ʼ��
	stu2 s2 = { 10,{"����"} };//Ƕ�׽ṹ��ĳ�ʼ��
	return 0;
}