#include<stdio.h>

//计算n的a次方
int nn(int a,int n){
	int sum = 1;
	for (int i = 0; i < a; ++i)
	{
		sum*=n;
	}
	return sum;
}

int psum(int a,int n){
	if(a == 0 || n == 0){
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum+= nn(a,i+1);
	}
	return sum;
}


int main(int argc, char const *argv[])
{
	printf("%d\n", psum(3,3));
	
	return 0;
}