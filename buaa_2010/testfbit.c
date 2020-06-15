
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	char arr[10];
	char ch;
	for (int i = 0; (ch = getchar())!='0'; ++i){
		arr[i]=ch;
		printf("%c\n", arr[i]);
		printf("111\n");
		/* code */
	}
	printf("%ld\n", strlen(arr));
	for (int i = 0; i<strlen(arr) ; ++i)
	{
		printf("222\n");
		/* code */
		putchar(arr[i]);	
	}

	FILE *fp;
	fp = fopen("/tmp/test.txt","wb");
	if(fp==NULL){
		printf("打开失败\n");
		exit(0);
	}
	fclose(fp);


	return 0;
}