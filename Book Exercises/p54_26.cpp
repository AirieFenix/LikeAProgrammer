//	Page 54, excercise 2-6
//	Program to decode binary numbers to decimal and viceversa
//
//	This was harsh, I almost didn't do anything :(

#include <iostream>
using std::cin;
using std::cout;

int main () {

	char digitChar;
	int digitInt;
	int rem;
	int dec = 0;
	int base = 1;

	cout<<"Enter a binary number (max=10 digits): ";

	digitChar = cin.get();
	digitInt = digitChar - '0';
	digitChar = cin.get();
 
	while (digitChar != 10) {
		digitInt = digitInt * 10 + (digitChar - '0');
		digitChar = cin.get();
	}

	cout<<"Number in binary: "<<digitInt<<"\n";

	while (digitInt > 0) {
		rem = digitInt % 10;
		dec = dec + rem * base;
		base = base * 2;
		digitInt = digitInt / 10;
	}

	cout<<"The decimal number is: "<<dec<<"\n";

	return 0;
}