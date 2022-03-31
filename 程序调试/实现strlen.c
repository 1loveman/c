#include<stdio.h>
#include<assert.h>

int M_strlen(const char* source) {
	assert(source!=NULL);
	char* p = source;
	while (*p) {
		p++;
	}
	return p - source;
}

int main() {
	char arr[] = "hello";
	printf("%d\n", M_strlen(arr));


}