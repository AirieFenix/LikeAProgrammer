//	Find the agent with the highest median sales, based on the struct agents of chapter 3
//	compile: g++ ex_31.cpp -o ex_31.out	
//

#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 10;
const int MONTH_SIZE = 7;
struct agent {
	string agentName;
	int agentMonthly;
};

void printArray (int someArray[MONTH_SIZE]);
int compareMonths(const void* intA, const void* intB);

int main () {
	int median;
	int anArray[MONTH_SIZE] = {10, 6, 2, 14, 7, 9, 1};

	qsort(&anArray, MONTH_SIZE, sizeof(int),compareMonths);

	if (MONTH_SIZE % 2 == 0) {
		median = ((anArray[(MONTH_SIZE/2)-1]) + (anArray[MONTH_SIZE/2])) / 2;
	}
	else {
		median = anArray[(MONTH_SIZE / 2)];
	}

	printArray(anArray);
	cout<<"\nThe median is: "<<median;

	cout<<"\n";
	return 0;
}

int compareMonths(const void* intA, const void* intB) {
	int* ptrA = (int*) intA;
	int* ptrB = (int*) intB;

	return *ptrA - *ptrB;
}

void printArray (int someArray[MONTH_SIZE]) {
	for (int i = 0; i < MONTH_SIZE; i++) {
		cout<<"\n"<<someArray[i];
	}
}