#include<stdio.h>
#include<string.h>

int ALGORITHM(int A[],int n){
	int m;
	if(n==1){
		return A[0];
	}else{
		int max = ALGORITHM(A,n-1);
		if(A[n-1]>max){
			return A[n-1]; 
		}else{
			return max;
		}
	}

}

int main(int argc, char const *argv[])
{
	int A[]={1,2,6,7,4,5};
	printf("%d\n", ALGORITHM(A,5));
	return 0;
}