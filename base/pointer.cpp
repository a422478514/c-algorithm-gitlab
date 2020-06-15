#include <iostream>

using namespace std;

int main(){
	int var[] = {1,2,3};
	int *p = var;
	while(*p){
			printf("%d\n",*p );
			p++;
	}
	return 0;
}