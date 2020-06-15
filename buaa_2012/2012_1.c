#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void fun(float *sn,int n){
	float s=0,w,f=-1;
	int i;
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		f=f*(-1);

		w=f/(2*i+1);
		s+=w;
		printf("f=%f s=%f w=%f\n",f,s,w);
	}
	*sn=s;
}

int main(int argc, char const *argv[])
{
	/* code */
	int n=2;
	float sn=0;
	float s=1.2;
	printf("%f\n", s/2);
	fun(&sn,n);
	printf("%f\n", sn);
	return 0;
}