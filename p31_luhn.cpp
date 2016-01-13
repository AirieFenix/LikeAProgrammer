//Luhn Checksum validation (page 31)

#include <iostream>
using std::cin;
using std::cout;

int main() {
	int a=0;		//momentary var, current digit
	int totalSum=0;	//sum of all the numbers to that point
	int i=0;		//number of iterarion, useful to know when multiply
	int valDigit=0;	//Validation digit

	cout<<"Introduce the ID number, to stop the input, enter -1";
	cout<<"\n";

	do{
		cout<<"Introduce the next digit: ";
		cin>>a;

		if (a == -1){
			break;
		}

		if (i%2 != 0) {
			a *=2;
		}

		if (a>=10){
			totalSum = totalSum + 1 + (a-10);
		}
		else {
			totalSum += a;
		}	

		i++;
	}while (true);
	
	cout<<"Enter the validation digit: ";
	cin>>valDigit;

	totalSum += valDigit;


	if (totalSum%10 == 0){
		cout<<"The number is VALID.";
	}
	else {
		cout<<"The number is NOT VALID.";
	}
	cout<<"\n";

	return 0;
}