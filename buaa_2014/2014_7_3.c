#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int INDEX(char str[],char substr[]){
	int i,j,k;
	for (i = 0; str[i]; ++i)
	{
		for (j=i,k=0;str[j]==substr[k]; ++j,k++){
			if(substr[k+1])
				return j;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	char str[]="beijing huanyingni";
	char substr[]="ying";
	int i = INDEX(str,substr);
	printf("%d\n", i);
	return 0;
}