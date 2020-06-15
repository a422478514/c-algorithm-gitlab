#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int a=4,b=3,*ptr,*qtr,*t;
	ptr=&a;
	qtr=&b;
	t=qtr;
	qtr=NULL;
	//*qtr=0;
	t=ptr;
	*ptr=a;
	*ptr=*t;
	return 0;
}