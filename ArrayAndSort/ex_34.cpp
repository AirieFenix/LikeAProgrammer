//	Cipher
//	"What Wehrner von Braun do?" - Destin, Smarter Every Day
// 	Ale Zuvic, 06.02.2016

#include <iostream>

using std::cin;
using std::cout;

const int ALPHABET_SIZE = 27;
const char CIPHER_ALPHABET[ALPHABET_SIZE] = {'T','X','O','F','M','L','A','S','C','B','Z','D', 'J','A','H','N','.','G','H',
											'V','I','P','Y','W','V',','};
char cipher(char letter);

int main () {

	cout<<"Introduce your message and then hit ENTER :";
	char letter = cin.get();
	cout<< "\n";
	while (letter != 10) {
		cout<<cipher(letter);
		letter = cin.get();
	}

	cout<<"\n";
	return 0;
}

char cipher(char letter) {

	//return 'm';
	if (letter == 32) {
		return ' ';
	}
	else {
		return CIPHER_ALPHABET[letter - 97];
	}
}