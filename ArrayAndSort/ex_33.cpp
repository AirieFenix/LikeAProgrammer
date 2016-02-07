//	Find the agent with the highest median sales, based on the struct agents of chapter 3
//	compile: g++ ex_31.cpp -o ex_31.out	
//

#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 10;

bool isSorted(int anArray[], int sizeArray);

int main () {

	int arrayOne[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	if (isSorted(arrayOne, MAX_SIZE) == true) {
		cout<<"Sorted!";
	}
	else {
		cout<<"Not sorted, man. Sorry.\n";
	}

	cout<<"\n";
	return 0;
}

bool isSorted(int anArray[], int sizeArray) {
	int lowest = anArray[0];

	for (int i = 1; i<sizeArray; i++) {
		if (anArray[i] < lowest) {
			return false;
		}
	}

	return true;
}