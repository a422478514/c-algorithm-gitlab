#include <iostream>

using namespace std;

int sum(int * a,int * b){
	(*a)++;
	return *a + *b;
}

int swap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
	return 0;
}
int swapAddress(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int main(){
	{
		int a = 1;
		int b = 2;	
		swap(a,b);
		printf("%d\n", a);
		printf("%d\n", b);
		swapAddress(&a,&b);
		printf("%d\n", a);
		printf("%d\n", b);	
	}
	return 0;
}