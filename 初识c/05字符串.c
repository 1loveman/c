//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//
//int main() {
//	//字符串  双引号引起的一串字符;
//	//  ""空字符串
//	char arr[] = "apple";//实际上e后面还有个'\0'作为字符串的结束标准，在计算时不算入字符串的长度。
//	printf("字符串为:%s\n", arr);
//	char arr2[] = { 'a','p','p','l','e',0 };
//	char arr3[] = { 'a','p','p','l','e' };
//	printf("字符串为:%s\n", arr);//结果一样
//	//用strlen测量长度，需要string头文件
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr2));
//	//分别是5，随机值，5  ,因为strlen函数是计算到\0结束
//
//
//	//转义字符
//	// \n换行
//	// \\ 反斜杠
//	// \t 制表符  加上\t前的内容共占八位
//	// \三位数字， 三位数是八进制 化成十进制ascll码
//	// \x两位数字，两个数字为十六进制 转换为十进制ascll码
//
//	//注释
//	//c++风格-----单行注释---- //注释内容
//	//C语言风格--- 多行注释----  /*注释内容*/  缺点容易出错嵌套无法实现。
//
//
//	return 0;
//}