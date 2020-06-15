#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int accul(int base,int factor,int max){
	int i,result = 0;
	for (int i = 1; i <= max; ++i)
	{
		if(i%factor==0){
			continue;
		}
		result+=base;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int result;
	result = accul(10,3,6);
	printf("%d\n", result);
	return 0;
}