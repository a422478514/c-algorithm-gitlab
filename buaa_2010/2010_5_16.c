#include<stdio.h>
#include<string.h>

struct s
{
	int age;
	int num;
};

static struct s a[3] = {1001,20,1002,19,1003,21},*ptr;


int main(int argc, char const *argv[])
{
	 ptr = a;
	// printf("%d\n", ptr++->num);
	printf("%d\n", (ptr++)->age);
	//printf("%d\n", (*ptr).num);
	 //printf("%d\n", (*++ptr).age);
	return 0;
}