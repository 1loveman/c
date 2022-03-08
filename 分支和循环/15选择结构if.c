#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//程序的三种结构
//顺序结构
//选择结构
//循环结构
//语句以分号结尾
int main(){
	//if语句三种结构
	int age;
	scanf("%d", &age);

	//if(表达式1){表达式1为真执行此处语句}
	if (age < 18) {						//若有多条语句则写在{代码块}里面
		printf("未成年\n");
	}

	//if(表达式1){表达式1为真执行此处语句}else{表达式为假执行的语句}
	if (age < 18) {
		printf("未成年\n");
	}
	else {
		printf("已成年\n");
	}

	//if(表达式1){表达式1为真执行此处语句}else if（表达式2）{表达式1为假执行的语句}else{表达式12均与为假执行的语句}
	if (age < 18) {
		printf("未成年\n");
	}
	else if (age < 60) {
		printf("壮年\n");
	}
	else {
		printf("老年\n");
	}

	int a= 0;
	int b = 2;
	if (a == 1)//此处为了避免将==写成=，可以数字写前即1==a;
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	//此处不输出,因为else只与他之前最近的一个if配对
	return 0;
}
