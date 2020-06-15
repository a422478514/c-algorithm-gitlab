#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *p;
	if((p=fopen("/tmp/hello20190718.txt","w+"))==NULL){
		printf("%s\n", "打开文件失败");
		return 0;
	}
	fprintf(p, "%s world is beautiful \n", "yes");
	fclose(p);
	return 0;
}