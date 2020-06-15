#include<stdio.h>

int swap(int *p1,int *p2){
	int *p3;
	p3=p1;
	p1=p2;
	p2=p3;
	return 0;
}

int main(int argc, char const *argv[])
{
	int a=3,b=4;
	swap(&a,&b);
	printf("%d  %d\n", a,b);
	return 0;
}

