 #include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "../common/base.c"

int main(int argc, char const *argv[])
{
	int i;
	float n;
	FILE *fp;
	if((fp=fopen("/tmp/daquan/3.txt","wb"))==NULL){
		return 0;
	}
	for ( i = 0; i < 3; ++i)
	{
		scanf("%f",&n);
		fwrite(n,);
	}
	fclose(fp);
	return 0;
}