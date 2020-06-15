#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
	int fun(int *p);
	int fun2(int a[]);

	int arr[10],*p;
	p=arr;
	fun(p);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int fun(int *p){
	int k;
	for (k = 1; k <= 10; k++){
		*(p+k-1)=k;	
	}
	for (k = 0; k < 5; k++){
		*(p+9-k)=*(p+k);
	}
}

int fun2(int a[]){
	int k;
	for (int k = 1; k <= 10; ++k){
		a[k-1]=k;
	}
	for (int k = 0; k < 5; k++)
	{
		a[9-k]=a[k];
	}
}