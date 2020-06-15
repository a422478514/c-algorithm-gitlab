#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	float score[][4] = {{60,70,80,90},{58,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4],int n);
	float *p;
	int i,m;
	printf("enter the number of student\n");
	scanf("%d",&m);
	printf("the scores of No.%d are\n",m);
	p=search(score,m);
	for (int i = 0; i < 4; ++i)
	{
		printf("%5.2f\t",*(p+i) );
		printf("\n");
	}
	return 0;
}

float *search(float (*pointer)[4],int n){
	//float *pt;
	//pt = *(pointer+n);
	return *(pointer+n);
}