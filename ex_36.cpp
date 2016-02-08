// 	Cipher / de-cipher program with random generated cipher alphabet
// 	"If something is important enough you should try, even if the probable outcome is failure" - Elon Musk
//	compile: g++ ex_36.cpp -o ex_36.out
//	Ale Zuvic, 7.2.16

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::cin;
using std::cout;

const int ALPHABET_SIZE = 26;
char alphabet[ALPHABET_SIZE];
bool isRepeat(char alphabet[ALPHABET_SIZE], int position);
char cipher(char letter);
char decipher(char letter);

int main () {

	srand(time(NULL));

	for (int position=0; position < ALPHABET_SIZE; position++) {
		alphabet[position] = (rand() % 26) + 65;
		while (isRepeat(alphabet,position) == true) {
			alphabet[position] = (rand() % 26) + 65;
		}
		char thisLetter = (char) position + 97;
		cout<< thisLetter << ": " << alphabet[position]<<"\n";
	}

	char letter = (char) NULL;
	cout << "\nDo you want to cipher(1) or de-cipher(2) the message?: ";
	int option;
	cin >> option;

	//Why the fuck is this happening I don't know :(
	letter = cin.get();

	switch (option) {
		case 1:	cout<<"Introduce your message and then hit ENTER: ";
				letter = cin.get();
				cout<< "\n";
				while (letter != 10) {
					cout<<cipher(letter);
					letter = cin.get();
				}
				break;
		case 2:	cout<<"Introduce your message and then hit ENTER: ";
				letter = cin.get();
				cout<< "\n";
				while (letter != 10) {
					cout<<decipher(letter);
					letter = cin.get();
				}
				break;
		default:
		cout << "The choosen option is invalid.";
	}

	cout << "\n";
	return 0;
}

bool isRepeat(char alphabet[ALPHABET_SIZE], int position) {

	for (int subpos=0; subpos<position; subpos++) {
		if (alphabet[subpos] == alphabet[position]) {
			return true;
		}
	}
	return false;
}

char cipher(char letter) {

	if (letter == 32) {
		return ' ';
	}
	else {
		return alphabet[letter - 97];
	}
}

char decipher(char letter) {

	if (letter == 32) {
		return ' ';
	}
	else {
		for (int position = 0; position < ALPHABET_SIZE; position++) {
			if (letter == alphabet[position]){
				return position + 97;
			}
		}
	}

	return ' ';
}