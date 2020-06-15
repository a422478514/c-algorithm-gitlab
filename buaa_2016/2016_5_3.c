#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int f(int n){
	if(n == 1 || n == 2) return 1;
	else return f(n-1) + f(n-2);
}

void print_fib(int n){
	int i;
	if(n<1) printf("请输入正整数\n");
	for (int i = 1; i <= n; ++i)
	{
		printf("%d\n", f(i));
	}
}

int main(int argc, char const *argv[])
{
	print_fib(10);
	return 0;
}