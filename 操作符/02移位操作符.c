//#include<stdio.h>
//
//
//int main() {
//	//移位操作符
//	// 移位操作符不可以移动负数位，并且只能作用到整数
//	//左移右移  <<  >> 移动的是二进制位
//	//格式 变量 操作符 移动的位数
//	//右移分为算数右移和逻辑右移
//	//算数右移舍弃右边 左边补原符号位 通常算术
//	//逻辑右移舍弃右边 左边补0 
//	//左移操作符直接舍掉左边 右边补0 
//	//负数都需要先转换为补码计算
//	int a1,a2,a = 2;  //0000 0000 0000 0000 0000 0000 0000 0010
//	a1 = a << 1;
//	a2 = a >> 1;
//	printf("%d\n", a1 );
//	
//	printf("%d\n", a2);
//
//	return 0;
//}
//
////整数二进制有三种表示  原码 反码补码
////计算机中存储的都是补码，，移位移动的也是补码
////-1负数
//// 原码1000 0000 0000 0000 0000 0000 0000 0001 
//// 反码1111 1111 1111 1111 1111 1111 1111 1110 符号位不变 其他位按位取反
//// 补码1111 1111 1111 1111 1111 1111 1111 1111 反码加1