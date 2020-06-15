#include<stdio.h>
#include<string.h>

int fun(int n){
	int count = 0;
	while(n){
		count++;
		n=n/10;
	}
	return count;
}


int main(int argc, char const *argv[])
{
	printf("%d\n", fun(1999));
	return 0;
}