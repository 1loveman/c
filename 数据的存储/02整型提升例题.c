#include<stdio.h>



int main() {
	char a = -128;
	char b = -129;
	
	printf("%u\n%u\n",a,b);
	printf("%d\n%d\n",a,b);
	//提升时是根据原ab判断是有符号还是无符号。
	//有符号的话就将ab的最高位当作符号位提升
	//打印时，如果是无符号格式直接打印
	//打印时，若是有符号则将提升后的二进制代码看作补码，
	//求出原码打印。
}
