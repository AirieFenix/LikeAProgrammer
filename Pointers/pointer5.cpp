//	Playing a little more with pointers
//	news and deletes
//	
//	Ale Zuvic, 08.02.2016

#include <iostream>
using std::cout;

int main() {

	double *doublePtr = new double;
	double doubleVar;

	*doublePtr = 35.4;
	doubleVar = *doublePtr;

	cout << doubleVar;

	delete doublePtr;
	cout << *doublePtr;

	return 0;

}