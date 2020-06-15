#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int a[10] = {0};
	// 为什么 if('\0')是false
	if('\0'){
			printf("%s\n", "1");
	}else{
		printf("%s\n", "0");
	}
	return 0;
}