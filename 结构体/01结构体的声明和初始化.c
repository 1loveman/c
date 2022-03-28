#include<stdio.h>

//声明---声明是一条语句所以需要加分号
struct stu {//创建结构体类型，不占用空间，实例化时才占领空间
	char name[20];
	short age;
	char sex[5];
	int score;

};

struct stu1 {
	char name[20];
	

}s11;//在定义的同时就申请全局变量--尽量少用全局变量

typedef struct stu2 {//给变量类型重新起名--即struct stu 等同于stu2//因为是语句需要分号
				//格式 typedef 原类型  现类型;
	short age;
	struct stu1 s22;
}stu2;


int main() {
	//结构体---是一些值的集合，结构体每个成员可以是不同类型的变量
	//结构体声明
	//struct---关键字   stu----结构体标签   struct stu-----结构体类型

	struct stu s;//实例化  局部变量
	struct stu s1 = { "张三",10,"女",100 };//结构体变量的初始化
	stu2 s2 = { 10,{"张三"} };//嵌套结构体的初始化
	return 0;
}