//	Practice some pointers

#include <iostream>
using std::cout;

int main () {

	int numb = 88;
	double dNumb = 55.66;
	double *pDNumb = &dNumb;
	int *intpNumb = &numb;

	cout << "\n Pointer (with *) = 		" << *intpNumb << "\n";
	cout << "\n Pointer (without *) = 	" << intpNumb << "\n";
	cout << "\n Numb address (with &) =	" << &numb << "\n";
	cout << "\n Pointer double (with *) = 	" << *pDNumb << "\n";
	//*pDNumb = numb;

	*intpNumb = 78;

	cout << "\n Numb changed by pointer = " << numb << "\n";

	int *ptrA = new *ptrA;
	*ptrA = 55;

	return 0;
}