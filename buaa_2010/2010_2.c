#include <stdio.h>


int FUNC2(int a[],int n){
	if(n==1)
		return 1;
	if(n==2){
		int i =a[1]>=a[0]?1:0;
		printf("%d\n", i); 
		return i;
	}
		
		int k = FUNC2(a,n-2);
		int v = a[n-1]>=a[n-2];
		printf("%d,%d\n",k,v );
	int j = FUNC2(a,n-2) && (a[n-1]>=a[n-2]);
	printf("n-1=%d n-2=%d %d\n",n-1,n-2,j); 
	return j;
}

int main(int argc, char const *argv[])
{
	int a[]={1,2,3,4,5,6};
	/* code */
	int b = FUNC2(a,6);
	printf("%d\n", b);
	return 0;
}