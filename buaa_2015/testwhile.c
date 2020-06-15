#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int fun1(){
	int k = 1;
	int n = 10;
	double s;
	for ( s=1.0,k=1; k<=n ; k++){
		s=s+1.0/(k*(k+1));
	}
	printf("=%f\n", s);
}

int fun2(){
	int k = 1;
	int n = 10;
	double s=1.0;
	while(k<=n){
		s=s+1.0/(k*(k+1));
		k++;
	}
	printf("=%f\n", s);
}

int main(int argc, char const *argv[])
{
	fun1();
	fun2();
	return 0;
}