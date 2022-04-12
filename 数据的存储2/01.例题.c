#include<stdio.h>
#include<string.h>

//int main() {
//	////题一
//	//unsigned int i;
//	//for (i = 9; i >= 0; i--) {//死循环,因为i范围为0--2^32-1
//	//	printf("%d\n", i);
//	//}
//	////题二
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++) {
//	//	a[i] = -1 - i;
//	//}
//	//printf("%d\n", strlen(a));//不会一直读取、因为a[i]范围为-128--0--+127;并且-128-1=127
//	////题三
//	//unsigned char i = 0;
//	//for (int i = 0; i < 255; i++) {
//	//	printf("hello\n");//255+1=0;
//	//}//死循环
//
//
//}