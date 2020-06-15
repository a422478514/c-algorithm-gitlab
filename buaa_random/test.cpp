#include<stdio.h>
#include <stdlib.h>


int main(){
	char ch;
	ch = getchar();
	printf("%c\n", ch);
	printf("%c\n", getchar());
	if(ch=='#'){
		printf("%s\n", "结束");
	}
	printf("%s\n", "exit");
	return 0;
}
