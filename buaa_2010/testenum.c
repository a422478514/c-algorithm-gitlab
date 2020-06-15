#include <stdio.h>

enum WEEKDAY{sum=1,mon=2};
int i = 1;

int main(int argc, char const *argv[])
{
	enum WEEKDAY workday = sum;
	/* code */
	printf("%d\n", workday);
	printf("%d\n", i);
	return 0;
}