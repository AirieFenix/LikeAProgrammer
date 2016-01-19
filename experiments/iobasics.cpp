// Program to experiment/learn about input/output, basically iostream
//g++ iobasics.cpp -o iobasics.out

#include <iostream>
using std::cin;
using std::cin;
using std::cout;

int main () {

	char firstChar;
	char charArray[120];
	cout<<"The program starts here\n";

	char line[100];
   	cout << " Type a line terminated by 't'"<<"\n";
   	cin.getline( line, 100, 't' );
   	cout << line;//cout<<"Enter a letter: ";
	//firstChar = cin.get();

	//cout<<"Letter is: "<<firstChar;

	//cout<<"\nEnter more than one letter: ";
	//charArray[0] = cin.get();
	//cin>>charArray;

	//cout<<"Array is: "<<charArray<<"\n";

	//for (int currentChar=0; currentChar<sizeof(charArray); currentChar++) {
	//	charArray[currentChar] = cin.get();
	//}

	//cin.get(charArray,sizeof(charArray));

	//cout<<charArray<<"\n";
	//cout<<charArray<<"\n";
	//cout<<sizeof(charArray);

	return 0;
}