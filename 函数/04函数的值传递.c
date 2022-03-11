#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//传值
void swap_(int n1, int n2) {//形参，函数调用时开辟 结束后自动释放
	int temp = 0;
	temp = n2;
	n2 = n1;
	n1 = temp;
}
//传址
void swap(int* p1, int* p2) {
	int temp = 0;
	temp = (*p1);
	(*p1) = (*p2);
	(*p2) = temp;

}

int main() {
	int n1 = 0;
	int n2 = 0;
	//找两个数的较大值;
	printf("请输入两个数\n");
	scanf("%d%d", &n1, &n2);
	printf("%d  %d\n",n1,n2);
	swap_(n1, n2);
	//函数先定义，声明，调用  ，如果函数定义放在main之后则需要声明
	printf("值传递 %d  %d\n", n1,n2 );//实际上并没有完成交换；因为形参是新开辟的临时空间，跟之前的不同;形参改变不会影响实参；
	swap(&n1, &n2);
	printf("址传递 %d  %d\n", n1, n2);

	return 0;
}