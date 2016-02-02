//	Write a C++ program to find the max of an integral data set. The program will 
//	ask the user to input the number of data values in the set and each value. 
//	The program prints on screen a pointer that points to the max value.
//
//	"God doesn't play with dices" - Albert Einstein
//	Ale Zuvic 27.01.2015

#include <iostream>
using std::cin;
using std::cout;

const int MAX_SIZE = 10;

int main () {

	cout<<"\n";

	int dataSet[MAX_SIZE] = {32, 87, 123, 55, 3, 990, 122, 45, 7, 0};

	cout<<"The data set is:\n";
	for (int step = 0; step < MAX_SIZE; step++){
		cout<<dataSet[step]<<" ";
	}

	int highest = dataSet[0];

	for (int step = 1; step<MAX_SIZE; step++) {
		if (highest < dataSet[step]) {
			highest = dataSet[step];
		}
	}

	int *ptrHighest = &highest;

	cout<<"\n";
	cout<<"The address of the highest number is: "<<ptrHighest<<"\n";
	cout<<"The value is: "<<*ptrHighest<<"\n";

	cout<<"\n";
	return 0;
}