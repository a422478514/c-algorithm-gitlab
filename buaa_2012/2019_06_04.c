#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	int d1,d2,a[6]={1,2,3,4,5,6};
	fp=fopen("/tmp/file.dat","w");
	fprintf(fp, "%d %d %d\n",a[0],a[1],a[2]);
	fprintf(fp, "%d %d %d\n",a[3],a[4],a[5]);
	fclose(fp);
	fp=fopen("/tmp/file.dat","r");
	fscanf(fp,"%d%d",&d1,&d2);
	printf("%d%d\n",d1,d2);
	return 0;
}