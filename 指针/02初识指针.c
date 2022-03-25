#include<stdio.h>
int strlen_(char* str) {
	char* end = str;
	while (*end != (char)'\0') {
		end++;
	}
	return end - str;
}


int main() {
	//指针运算
	//指针+-整数
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("%d\n", *(p + i));
		//p+1并不等于p=p+1; 
	}
	
	//指针-指针
	//得到的是中间元素的个数
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p1 = arr1;
	len = sizeof(arr1) / sizeof(arr1[0]);//中间元素个数，需要指向同一空间
	printf("%d\n", &arr[9] - &arr[0]);
	char arr3[] = "hello";
	len = strlen_(arr3);
	printf("len=%d\n",len);
	//指针的关系运算
	//即指针比较大小//C语言规定允许指针跟其指向的数组元素的最后一个元素的下一个元素地址比较

	//二级指针
	//格式int**指针名;
	int aa = 10;
	int* pp = &aa;
	int** ppp = &pp;
	int*** pppp = &ppp;//三级指针
	//使用解引用
	*ppp;//为pp的地址
	**ppp;//即为aa


	//指针数组--存放指针的数组
	int a;
	int b;
	int c;
	int* arr4[3] = { &a,&b,&c };
	//数组指针--存放数组的指针

	return 0;
}