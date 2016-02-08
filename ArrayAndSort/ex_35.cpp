// Cipher / de-cipher program
// "Sometimes when you fill a vacuum, it still sucks." - Dennis Ritchie

#include <iostream>

using std::cin;
using std::cout;

const int ALPHABET_SIZE = 27;
const char CIPHER_ALPHABET[ALPHABET_SIZE] = {'T','X','O','F','M','L','A','S','C','B','Z','D', 'J','A','H','N','.','G','H',
											'V','I','P','Y','W','V',','};
char cipher(char letter);
char decipher(char letter);

int main () {

	char letter = NULL;
	cout << "Do you want to cipher(1) or de-cipher(2) the message?: ";
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

	

	cout<<"\n";
	return 0;
}

char cipher(char letter) {

	if (letter == 32) {
		return ' ';
	}
	else {
		return CIPHER_ALPHABET[letter - 97];
	}
}

char decipher(char letter) {

	if (letter == 32) {
		return ' ';
	}
	else {
		for (int position = 0; position < ALPHABET_SIZE; position++) {
			if (letter == CIPHER_ALPHABET[position]){
				return position + 97;
			}
		}

	}

	return '4';
}