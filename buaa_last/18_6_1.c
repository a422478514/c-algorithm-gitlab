#include<stdio.h>


int fun1(){
	int i,j,count=0;
	for (int i = 0; i < 100; ++i)
	{
		for (j = 100; j >= i; j-=2)
		{
			count += j-i;
			printf("count = %d\n", count);
		}
	}
	return 0;
}

int fun2(){
	int i,j,count=0;
	i = 0;
	while(i<100){
		j = 100;
		while( j >= i ){
			count += j-i;
			j-=2;
			printf("count = %d\n", count);
		}
		i++;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	fun1();
	return 0;
}