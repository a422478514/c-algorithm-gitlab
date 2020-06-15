#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int f1(int i);
	int f2(int j);
	int sub(int i,int j,int (*fun1)(int),int (*fun2)(int));
	/* code */
	int sum ;
	sum= sub(1,2,f1,f2);
	printf("%d\n", sum);
	return 0;
}

int f1(int i){
	return i+1;
}
int f2(int j){
	return j+1;
}

int sub(int i,int j,int (*fun1)(int),int (*fun2)(int)){
	int a = (*fun1)(i);
	int b = (*fun2)(j);
	printf("%d\n", a);
	printf("%d\n", b);
	return a+b;
}