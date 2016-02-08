// 	Mode calculator
//	
//	compile: g++ ex_37.cpp -o ex_37.out
//	Ale Zuvic, 

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;

const int SIZE = 100;
const int RANGE = 10;
int ranNumbers[SIZE];
int numbers[RANGE];

int main() {

	srand(time(NULL));

	for (int i=0; i<SIZE; i++) {
		ranNumbers[i] = (rand() % 10) + 1;
		cout << ranNumbers[i] << " ";
	}

	for (int i=0; i<RANGE; i++) {
		numbers[i] = 0;
	}

	for (int i = 0; i < SIZE; i++) {
		numbers [ranNumbers[i]-1] ++;
	}

	cout<<"\n\n";

	for (int i=0; i<RANGE; i++) {
		cout << "Number " << i+1 << ": " << numbers[i] << "\n";
	}

	int highest = numbers[0];
	int highPos = 0;
	for (int i = 1; i<RANGE; i++) {
		if (numbers[i] > highest) {
			highest = numbers[i];
			highPos = i;
		}
	}

	cout << "\nThe mode (most repeated) number is: " << highPos+1 << ", whith " << numbers[highPos] << " repetitions";

	cout<<"\n";
	return 0;
}