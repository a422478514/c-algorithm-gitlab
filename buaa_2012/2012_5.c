#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
	/* code */
	char str1[]="acegikm";
	char str2[]="bdfhjlnpq";
	char str3[100],*p;

	int i=0,j=0,k=0;
	while(str1[i]!='\0' && str2[j]!='\0'){
		if(str1[i]<str2[j]){
			str3[k]=str1[i++];
		}else{
			str3[k]=str2[j++];
		}
		k++;
	}
	str3[k]='\0';
	if(str1[i]=='\0'){
		p=str2+j;
	}else{
		p=str1+i;
	}
	strcat(str3,p);
	puts(str3);
	return 0;
}