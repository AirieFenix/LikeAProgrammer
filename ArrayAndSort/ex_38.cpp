// 	Quartiles calculator for a students array
//	compile: g++ ex_38.cpp -o ex_38.out
//	"I could either watch it happen, or be part of it" - Elon Musk
//	Ale Zuvic, 08.02.2016

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;

int MAX_SIZE;
//int students[MAX_SIZE];
int size;

int compareInts (const void* intA, const void* intB);
int getQuartile (int givenArray[size]);

int main () {

	
	cout << "\nInsert size of array: ";
	cin >> MAX_SIZE;

	int students[MAX_SIZE];
	int size = MAX_SIZE;

	srand(time(NULL));

	cout << "Unsorted array: \n";
	for (int i = 0; i<MAX_SIZE;i++) {
		students[i] = (rand() % 10) + 1;
		cout << students[i] << " ";
	}

	qsort(students, MAX_SIZE, sizeof(int), compareInts);

	cout << "\n\nSorted array:\n";
	for (int i = 0; i<MAX_SIZE; i++) {
		cout << students[i] << " ";
	}

	cout << "\n\nMedian: " << getQuartile(students) << "\n";
	
	size = MAX_SIZE / 2;
	int subArray[size];

	for (int i = 0; i < size; i++) {
		subArray[i] = students[i];
	}
	cout << "\nFirst quartile: " << getQuartile(subArray) << "\n";

	int position = 0;
	for (int i = (size + 1); i < MAX_SIZE; i++) {
		subArray[position] = students[i];
		position++;
	}

	cout << "\nThird quartile: " << getQuartile(subArray) << "\n";

	cout << "\n";
	return 0;
}

int compareInts (const void* intA, const void* intB) {
	int* ptrA = (int*) intA;
	int* ptrB = (int*) intB;

	return *ptrA - *ptrB;
} 

int getQuartile (int givenArray[]) {

	//for (int i = 0; i<size; i++) {
	//	cout << " " << givenArray[i];
	//}

	if (size % 2 == 0) {
		return (givenArray[(size/2)-1] + givenArray[size/2]) / 2; 
	}
	else {
		return (givenArray[size/2]);
	}

	return 0;
}