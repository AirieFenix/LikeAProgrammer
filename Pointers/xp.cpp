//	Experimenting/playing with pointers' arithmetic
//
//

#include <iostream>
using std::cin;
using std::cout;

int main() {

	const int MAX = 10;
	int *ptrInt;
	char *ptrChar = NULL
	;

	cout<<"Trying ++ on an int pointer\n";
	for (int step = 0; step<MAX; step++) {
		cout<<"Address for int "<<step+1<<": "<<ptrInt<<"\n";
		cout<<"Value for int "<<step+1<<": "<<*ptrInt<<"\n";
		ptrInt++;
	}


	
	cout<<"\nTrying ++ on a char pointer\n";
	for (int step = 0; step<MAX; step++) {
		cout<<"Address for char "<<step+1<<": "<<ptrChar<<"\n";
		cout<<"Value for char "<<step+1<<": "<<*ptrChar<<"\n";
		ptrChar++;
	}

	cout<<"\n";
	return 0;
}