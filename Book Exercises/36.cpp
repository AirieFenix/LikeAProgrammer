//	Page 78, excercise 3-3: determines either if the array is sorted or not
//	
//	Kinda easy

#include <iostream>
using std::cout;

const int MAX_SIZE = 10;
bool compare (int anArray[]);

int main() {
	int someArray[MAX_SIZE] = {1,2,3,5,4,6,7,8,9,10};
	bool sorted=compare(someArray);

	if (sorted == true) {
		cout<<"\nArray sorted\n";
	}
	else {
		cout<<"\nArray unsorted\n";
	}
}

bool compare(int anArray[]) {
	int highest = anArray[0];

	for (int i=1; i < MAX_SIZE; i++) {
		if (anArray[i] > highest) {
			highest = anArray[i];
		}
		else {
			return false;
		}
	}

	return true;
}