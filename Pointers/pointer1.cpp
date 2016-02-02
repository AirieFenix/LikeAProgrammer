//	Write a program that asks the user to enter integers as inputs to be stored in the variables 
//	'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign 
//	the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
//
//	"A small step forward still means going forward" - me
//	Ale Zuvic	27.01.15

#include <iostream>
using std::cin;
using std::cout;

int main () {

	int a, b;
	int *ptrA, *ptrB;

	cout<<"Introduce value a: ";
	cin>>a;
	cout<<"Introduce value b: ";
	cin>>b;

	ptrA = &a;
	ptrB = &b;

	cout<<"\n";
	cout<<"The value of the variables directed from the pointers are:\nptrA= "<<*ptrA<<"\nptrB = "<<*ptrB<<"\n";
	cout<<"And their addresses are:\nptrA: "<<ptrA<<"\nptrB: "<<ptrB;

	cout<<"\n";
	return 0;
}