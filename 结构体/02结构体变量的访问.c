#include<stdio.h>

typedef struct stu {
	char name[10];
	short age;
}stu;

//��ֵ
void print(stu s) {
	printf("%s,%d\n", s.name, s.age);
	
}

//��ַ
void print_(stu* s) {
	printf("%s,%d\n", s->name, s->age);

}


int main() {
	//�ṹ������ķ���
	//��һ  �ṹ���������.�ṹ���Ա;
	stu s = { "����",20 };
	printf("%s,%d\n", s.name, s.age);
	//����  ָ��->�ṹ���Ա;
	//��ֵ
	print(s);//��ȴ�ַ�˷��ڴ�

	//��ַ
	print_(&s);


	return 0;
}