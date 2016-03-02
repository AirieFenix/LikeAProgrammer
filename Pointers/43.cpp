//	Replace "target" from "source" with "replaceText"
//	“The only way of finding the limits of the possible 
//	is by goingbeyond them into the impossible.” - Arthur C. Clarke
//
//	Ale Zuvic 02.03.2016
//	Personal note: the day I learn to write REGEX...

#include <iostream>
using std::cin;
using std::cout;

typedef char *arrayString;

arrayString chop(arrayString &s, int starting, int ending);
arrayString replace (arrayString &source, arrayString target, arrayString replaceText);
int getSize (arrayString aString);

int main () {

	arrayString message = new char[5];
	message[0]='A'; message[1] = 'l'; message[2] = 'e'; message[3]='j'; message[4] = 'a'; message[5] = 'n';
				message[6] = 'd'; message[7] = 'r'; message[8] = 'o'; message[9] = 0;

	char target[1] = {0};
	char replaceText[4] = {'i','n','a',0};

	cout << "\n-Original array: " << message << "\n";
	arrayString something = replace(message, target, replaceText);
	cout << "\n-Altered array: " << something;

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

arrayString replace (arrayString &source, arrayString target, arrayString replaceText) {

	int i = 0;
	int a = 0;
	int beginning = 0;

	while (source[i] != 0) {
		if (source[i] == target[0]) {
			beginning = i;
			while (target[a] != 0) {
				if (source[beginning + a] != target[a]) {}
			else {
					a++;
				}
			}
		} 
		i++;
		if (beginning == 0) {
			cout << "No match for the replace text\n";
			return source;
		}
	}
	
	int newASLenght = getSize(source)-getSize(target)+getSize(replaceText);
	int x = 0;
	arrayString newAS = new char[newASLenght];

	for (int j=0; j<newASLenght; j++) {
		if (j < beginning) {
			newAS[j] = source[j];
		}
		else {
			newAS[j] = replaceText[x];
			x++;
		}
	}

	return newAS;
}

int getSize (arrayString aString) {
	int oldLenght = 0;
	while (aString[oldLenght] != 0) {
		oldLenght ++;
	}

	return oldLenght;
}