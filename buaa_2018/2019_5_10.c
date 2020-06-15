#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void recur(int num){
	if(num == 0) return;
	else printf("%d\n", num);
	recur((--num));
}

int main(int argc, char const *argv[])
{
	//recur(3);
	int i = 0;
	printf("%d\n", (++i));
	return 0;
}