#include<stdio.h>


int main() {
	//Debug--调试版本能够包含调试信息，不进行任何优化，方便程序员调试
	//Release--发布版本--进行了各种优化，使程序在代码大小和运行速度都是最优的，方便用户使用。

	//F5启动调试--配合F9断点使用
	int i;
	for (i = 0; i < 100; i++) {
		printf("%d ", i);
	}
	return 0;
}