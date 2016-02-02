//	Write a program that asks a name say hello. Use your own function, 
//	that recives a string of characters (name) and prints on screen 
//	the hello message. (Doesn't returns anything- void type)
//
//

#include <iostream>
using std::cin;
using std::cout;

const int MAX_SIZE = 20;

void hello (char someName[MAX_SIZE]) {

	cout<<"Hello, "<<someName<<"!!\n";
}

int main () {

	char name[MAX_SIZE];
	cin>>name;
	hello(name);

	return 0;
}