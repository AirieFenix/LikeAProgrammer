//	Testing qsort function from the standard library
//

#include <iostream>
using std::cin;
using std::cout;

int compareFunc (const void* voidA, const void* voidB) {
	int* intA = (int*) (voidA);
	int* intB = (int*) (voidB);

	return *intA - *intB;
}

int main(){

	const int MAX_SIZE = 10;
	int intArray[MAX_SIZE] = {43, 89, 77,11, 35, 98, 125, 76, 90, 2};
	qsort(intArray, MAX_SIZE, sizeof(int), compareFunc);

	for (int i = 0; i < MAX_SIZE; i++) {
		cout<<"\n";
		cout<<intArray[i];
	}

	cout<<"\n";
	return 0;
}