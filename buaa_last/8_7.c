#include<stdio.h>


int fun(char *p1,char *p2, int k){
	while(*(p1+k-1)){
		*p2 = *(p1+k-1);
		p2++;
		k++;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	char str1[100];
	char str2[100];
	char *p1,*p2;
	int k = 0;
	scanf("%s %d",str1,&k);
	printf("%s %d\n",str1,k);
	fun(str1,str2,k);
	puts(str2);
	return 0;
}