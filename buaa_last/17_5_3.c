#include<stdio.h>

int accul(int base,int  factor,int max){
	int i,result = 0;
	for (int i = 1; i <= max; ++i)
	{
		if(i%factor == 0) continue;
		result += base;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", accul(10,3,6));
	return 0;
}