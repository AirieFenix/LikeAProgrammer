//	Generate the check digit for ISBN-13 number
//	Compile using: g++ p54_25.cpp -o p54_25.out
//
//	"A 1000 mile journey starts with the first step"

#include <iostream>

using std::cin;
using std::cout;

int main () {

	int digitInt;
	char digitChar;
	int sumNumber = 0;
	int step = 1;

	cout<<"Enter a 12-digit ISBN code: ";

	while (step <=12) {
		digitChar = cin.get();
		if (digitChar != 45) {
			digitInt = digitChar - '0';
			step++;
		}
		if (step % 2) {
			digitInt *= 3;
		}
		if (digitChar != 45) {
			sumNumber += digitInt;
		}
		//cout<<digitInt<<"\n";
	}

	//cout<<sumNumber<<"\n";

	int modCheck = sumNumber % 10;
	modCheck = 10 - modCheck;

	cout<<"The check number is: "<<modCheck<<"\n";

	//cout<<digitInt;

	return 0;
}