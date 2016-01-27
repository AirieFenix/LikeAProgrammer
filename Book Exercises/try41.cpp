#include <iostream>
using std::cin;
using std::cout;

int main() {

	enum typeMode {UPPERCASE,LOWERCASE,PUNCTUATION};
	typeMode mode = UPPERCASE;
	char digitChar;
	int number;
	char letter;

	cout<<"Enter a series of numbers sepparated by commas: \n";

	do {
		digitChar = cin.get();
		number = digitChar - '0';
		digitChar = cin.get();

		while ((digitChar != 10) && (digitChar != ',')) {
			number = (number * 10) + (digitChar -'0');
			digitChar = cin.get();
		}
		//cout<<"Number entered: "<<number<<"\n";

		switch(mode) {
		case UPPERCASE:
			number = number % 27;
			letter = number + 64;	//65 is 'A' in ASCII
			if (number == 0) {
				mode = LOWERCASE;
				continue;
			}
			break;
		case LOWERCASE:
			number = number % 27;
			letter = number + 96;	//97 is 'a' in ASCII
			if (number == 0) {
				mode = PUNCTUATION;
				continue;
			}
			break;
		case PUNCTUATION:
			number = number % 9;
			switch (number) {
				case 1:	letter = '!';	break;
				case 2:	letter = '?';	break;
				case 3: letter = ',';	break;
				case 4:	letter = '.';	break;
				case 5:	letter = ' ';	break;
				case 6:	letter = ';';	break;
				case 7:	letter = '"';	break;
				case 8: letter = '\'';	break;

			}
			if (number == 0) {
				mode = UPPERCASE;
				continue;
			}
			break;
		}
		cout<<letter;
	} while (digitChar != 10);

	cout<<"\n";


	//cout<<"Total number entered: "<<number<<"\n";

	//cout<<number;
}