#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

#define N 4

double min_average(double a[N][N]){
	double min,average =0.0;
	int i,j;
	for (int i = 0; i < N; ++i)
	{
		min=a[i][0];
		for (j =1; j < N; ++j)
		{
			if(min > a[i][j]){
				min=a[i][j];
			}
		}
		average+=min;

	}
	return average/N;
}

int main(int argc, char const *argv[])
{
	double average;
	double a[4][4]={{2.0,3.0,1.0,4.0},{6.0,7.0,4.0,5.0},{11.0,23.0,32.0,11.0},{2.0,6.0,7.0,8.0}};
	average = min_average(a);
	printf("%f\n", average);
	return 0;
}