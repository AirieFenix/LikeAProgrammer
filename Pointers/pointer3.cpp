//	Take input in variable and display same value by pointer.
//	Personal note: I don't really understand, it's a trap O.o 
//	"Hopes for the best, prepare for the worst" - Anonymous (it wasn't a trap)
//	Ale Zuvic,	27.01.2015

#include <iostream>
using std::cin;
using std::cout;

int main () {

	int number;
	cout<<"\nEnter an integer value: ";
	cin>>number;

	int *ptrNumber = &number;
	cout<<"\nThe entered value is: "<<*ptrNumber;

	cout<<"\n";
	return 0;
}