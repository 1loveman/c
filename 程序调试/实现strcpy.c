#include<stdio.h>
#include<assert.h>

//六分
void M_strycpy1(char*target,char* source) {//缺陷，传入指针可能为空，没有返回值
	while (*source) {
		*target = *source;
		target++;
		source++;
	}
	*target = *source;
}

//八分
void M_strycpy2(char* target, char* source) {//缺陷，传入源指针可以被修改
	assert(target!=NULL);//断言，里面如果是假将会报错，需加入头文件assert.h
	assert(source!=NULL);
	while (*target++=*source++) {
		;
	}
}
//十分
char* M_strycpy(char* target, const char* source) {
	assert(target != NULL);//断言，里面如果是假将会报错，需加入头文件assert.h
	assert(source != NULL);
	char* tmp = target;
	//将source的值拷贝到target中，包含"\0"
	while (*target++ = *source++) {
		;
	}
	return tmp;

}


int main() {
	const char* const ar;//必须要定义时初始化，否则将无从修改。
	char arr[10] = "hello";
	char arr2[10] = "*********";
	M_strycpy1(arr2, arr);
	printf("%s\n", arr2);
	/*printf("%s\n", M_strycpy(arr2, arr));
	printf("%s\n", arr2);*/


	return 0;
}