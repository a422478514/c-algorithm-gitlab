#include <iostream>

using namespace std;

typedef struct 
{
	int id;
	char name[50];
} Book;


int main(){
	Book book = {1,"daquan"};
	Book book2 = {2,"daquan2"};
	//book.id = 1;
	//strcpy(book.name,"daquan");
	cout << book.id << endl;
	cout << book.name << endl;
	cout << book2.id << endl;
	cout << book2.name << endl;
	return 0;
}