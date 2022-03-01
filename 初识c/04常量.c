//#define _CRT_SECURE_NO_WARNINGS 1
////由于scanf函数不安全所以vs会报错 不要使用scanf_s 该函数只有vs才认;
////必须加在源代码首。
//
//#define weeks 7 //宏常量
//
//enum sex {
//	man,
//	wumen
//};
//
//
//int main() {
//	//常量
//	//不可修改，只读的值。
//	// 字面常量
//	// 如123
//	//宏常量
//	// 写在代码块之外，格式 #define 常量名 值 
//	// 
//	//const修饰的变量
//	// 格式 const 数据类型 变量名 = 值; 
//	/*const int n = 2;
//	int arr[n];  报错，因为n是常属性的变量，而数组内部只能为常量*/
//	//枚举常量
//	//一一例举
//	//关键字enum
//	enum sex s = man;
//	return 0;
//}