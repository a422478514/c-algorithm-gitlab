#include <iostream>

using namespace std;

typedef struct Node
{
	typedef int data;
	typedef Node *next;
}LinkedList;

int main(){
	char *desc;
	desc = (char *) malloc(sizeof(char));
	strcpy(desc,"daquanaaaaa");
	cout << desc;
	free(desc);
	cout << desc;
}