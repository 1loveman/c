//#include<stdio.h>
//
//int main() {
//	//隐式类型转换
//	//C语言的整型算数运算总是以缺省类型精度来计算，如int  实型double
//	//大类型防止小类型中截断只存储最后几个 小类型提示是按照符号位从前面添加
//
//	char a = 3;  //   00000000 00000000 00000000 00000011
//				 //	  截断放入a中				 00000011
//
//
//	char b = 127;//	  00000000 00000000 00000000 11111111
//				 //	  截断放入b					 01111111
//
//	char c = a + b;//计算时首先进行整型提升 将a和b转换为int型计算，然后再截断赋值给c
//	//提升高位补符号位//00000000 00000000 00000000 00000011
//					  //00000000 00000000 00000000 01111111
//					  //00000000 00000000 00000000 10000010
//		//截断放入c   //						   10000010
//	printf("%d",c);	  //由于按整型打印所以又要提升
//					  //11111111 11111111 11111111 10000010
//			//原码为  //10000000 00000000 00000000 01111110
//	//所以打印的数值为-126
//
//
//
//	return 0;
//}