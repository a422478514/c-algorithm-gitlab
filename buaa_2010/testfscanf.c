#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	char yes[10],world[10],is[5],beautiful[10];
	FILE *p;
	if((p=fopen("/tmp/hello20190718.txt","r"))==NULL){
		printf("%s\n", "打开文件失败");
		return 0;
	}
	fscanf(p,"%s %s %s %s",yes,world,is,beautiful);
	printf("%s\n", yes);
	printf("%s\n", world);
	printf("%s\n", is);
	printf("%s\n", beautiful);
	fclose(p);
}