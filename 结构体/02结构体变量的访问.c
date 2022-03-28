#include<stdio.h>

typedef struct stu {
	char name[10];
	short age;
}stu;

//传值
void print(stu s) {
	printf("%s,%d\n", s.name, s.age);
	
}

//传址
void print_(stu* s) {
	printf("%s,%d\n", s->name, s->age);

}


int main() {
	//结构体变量的访问
	//法一  结构体变量名儿.结构体成员;
	stu s = { "张三",20 };
	printf("%s,%d\n", s.name, s.age);
	//法二  指针->结构体成员;
	//传值
	print(s);//相比传址浪费内存

	//传址
	print_(&s);


	return 0;
}