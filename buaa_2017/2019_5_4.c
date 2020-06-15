#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>



int main(int argc, char const *argv[])
{
	char *str1 = "isGood";
	char *str2 = "isGood";
	char *str3 = "isGood3";
	char *str4 = "notisGood3";


	
	printf("１、%d\n", str1==str2);
	printf("２、%d\n", (*str1)==(*str2));
	printf("３、%d\n", str1==str3);
	printf("４、%d\n", (*str1)==(*str3));
	printf("５、%d\n", (*str1)==(*str4));
	

	char arr1[]="isGood";
	char arr2[]="isGood";
	char arr3[]="isGood3";
	char arr4[]="notisGood3";

	printf("１、%d\n", arr1==arr2);
	printf("２、%d\n", (*arr1)==(*arr2));
	printf("３、%d\n", arr1==arr3);
	printf("４、%d\n", (*arr1)==(*arr3));
	printf("５、%d\n", (*arr1)==(*arr4));
	printf("%c\n", *arr1);
	return 0;
}