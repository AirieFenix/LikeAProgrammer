//	Exercise 4.2, page 109
//	Yahoo!!
//	Ale Zuvic, 22.02.16

#include <iostream>
using std::cin;
using std::cout;

typedef char *arrayString;

arrayString chop(arrayString &s, int starting, int ending);

int main () {

	arrayString message = new char[5];
	message[0]='T'; message[1] = 'e'; message[2] = 's'; message[3]='t'; message[5] = 0;

	cout << chop(message, 2, 4);
	cout << "\n";

	return 0;
}

arrayString chop(arrayString &s, int starting, int ending) {

	int oldLenght = 0;
	while (s[oldLenght] != 0) {
		oldLenght ++;
	}

	arrayString newS = new char[ending - starting + 1];

	int a = 0;
	for (int i = starting; i < ending; i++) {
		newS[a] = s[i];
		a++;
	}

	newS[ending-starting] = 0;

	return newS;
}