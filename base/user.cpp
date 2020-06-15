#include <iostream>

using namespace std;

struct
{
	int id;
	char name[50];
} User;


int main(){
	User.id = 1;
	strcpy(User.name,"daquan");
	cout << User.id << endl;
	cout << User.name << endl;
	return 0;
}