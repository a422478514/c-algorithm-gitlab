#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	char ch;
	while((ch=getchar())!='\n'){
		//printf("%c\n",ch );
		if(ch>='a' && ch <='z'){
			//
			ch = ch-32+2;
			if(ch>'Z' && ch <= 'Z'+2){
				ch=ch-26;
			}
			printf("%c\n",ch );
		}
	}
	return 0;
}