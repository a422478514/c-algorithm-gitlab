#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int a,n,q;
	n=1;
	q=3;
	a=1;
	while(1){
		n=n+1;
		a*=q;
		if(a>=1000){
			break;
		}
	}
	printf("n=%d\n a=%d",n-1, a/q);

	return 0;
}