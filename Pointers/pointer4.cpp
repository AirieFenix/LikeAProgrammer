//	Given the string "A string." Print on one line the letter on the index 0, 
//	the pointer position and the letter t. undate the pointer to pointer +2. 
//	Then, in another line print the pointer and the letters r and g of the string (using the pointer).
//	Personal note: ok, this is weird. Going for char array or string object??
//
//

#include <iostream>

using std::cin;
using std::cout;

int main () {

	char phrase[] = "A string";
	char *ptrChar = &phrase[0];

	cout<<"I'm showing whatever is in array zero-position: "<<*ptrChar<<", the pointer's adddress: "<<&ptrChar;
	ptrChar += 3;
	cout<<" and the letter t (hopefully): "<<*ptrChar<<"\n";

	ptrChar ++;
	cout<<"Printing the letter R (again, hopefully): "<<*ptrChar<<" and the G (for God!): ";
	ptrChar += 3;
	cout<<*ptrChar;

	cout<<"\n";
	return 0;
}