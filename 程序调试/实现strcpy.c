#include<stdio.h>
#include<assert.h>

//����
void M_strycpy1(char*target,char* source) {//ȱ�ݣ�����ָ�����Ϊ�գ�û�з���ֵ
	while (*source) {
		*target = *source;
		target++;
		source++;
	}
	*target = *source;
}

//�˷�
void M_strycpy2(char* target, char* source) {//ȱ�ݣ�����Դָ����Ա��޸�
	assert(target!=NULL);//���ԣ���������Ǽٽ��ᱨ�������ͷ�ļ�assert.h
	assert(source!=NULL);
	while (*target++=*source++) {
		;
	}
}
//ʮ��
char* M_strycpy(char* target, const char* source) {
	assert(target != NULL);//���ԣ���������Ǽٽ��ᱨ�������ͷ�ļ�assert.h
	assert(source != NULL);
	char* tmp = target;
	//��source��ֵ������target�У�����"\0"
	while (*target++ = *source++) {
		;
	}
	return tmp;

}


int main() {
	const char* const ar;//����Ҫ����ʱ��ʼ���������޴��޸ġ�
	char arr[10] = "hello";
	char arr2[10] = "*********";
	M_strycpy1(arr2, arr);
	printf("%s\n", arr2);
	/*printf("%s\n", M_strycpy(arr2, arr));
	printf("%s\n", arr2);*/


	return 0;
}