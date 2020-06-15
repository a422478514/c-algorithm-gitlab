#include<stdio.h>
#include<string.h>




int main(int argc, char const *argv[])
{
	int fun(int b,int c);
	printf("%d\n", fun(1,2));
	
	return 0;
}
int fun(int a,int b){
	return a+b;
}