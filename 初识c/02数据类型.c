//#include<stdio.h>
//
//int main() {
//	//数据类型
//	// 作用：用来申请空间创建变量，为了更合理的利用内存。
//	// 字符型char
//	char ch = 'a';//必须要单引号并且只能一个字符；
//	printf("ch =%c\n", ch);// %c打印字符格式的数据
//	printf("char类型占%d个字节\n", sizeof(char));//char占一个字节;
//	// 短整型short
//	short a1 = 21;
//	printf("al =%d\n", a1);// %d打印整型十进制格式的数据
//	printf("short类型占%d个字节\n", sizeof(short));//short占两个字节;
//	// 整型int
//	int a2 =21;
//	printf("a2 =%d\n", a2);// %d打印整型十进制格式的数据
//	printf("int类型占%d个字节\n", sizeof(int));//int占四个字节;
//	// 长整型long
//	long a3 =21;
//	printf("a3 =%d\n", a3);// %d打印整型十进制格式的数据
//	printf("long类型占%d个字节\n", sizeof(long));//long占四个字节;
//	// 长长整型long long
//	long long a4 = 21;
//	printf("a4 =%d\n", a4);// %d打印整型十进制格式的数据
//	printf("long long类型占%d个字节\n", sizeof(long long));//long long占八个字节;
//	//浮点型只显示6位有效数字。
//	// 单精度浮点型float
//	//float只能保证7位有效数字
//	float a5 = 3.14f;
//	printf("a5 =%f\n", a5);// %f打印单精度浮点格式的数据
//	printf("float类型占%d个字节\n", sizeof(float));//float占四个字节;
//	//双精度浮点型double
//	//double只能保证15-16位有效数字。
//	double a6 = 3.14;
//	printf("a6 =%lf\n", a6);// %lf打印双精度浮点格式的数据
//	printf("double类型占%d个字节\n", sizeof(double));//double占八个字节;
//	return 0;
//}
////  1字节(byte)=8个二进制位(bit)
////  1024kb = 1mb
//
//
//
//// 
////二进制   01
//// 八进制  01234567
//// 十进制  0123456789
////十六进制 0123456789ABCDEF