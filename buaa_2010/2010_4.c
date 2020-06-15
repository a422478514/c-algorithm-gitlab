#include <stdio.h>

void FUNC4(int n){
	int i;
	i=n/10;
	if(i>0){
		FUNC4(i);
	}
	putchar(n%10+'0');
	
}

int main(int argc, char const *argv[])
{
	/* code */
	FUNC4(583);
	return 0;
}