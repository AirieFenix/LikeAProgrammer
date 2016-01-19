// Problem: decode a message, page 41, attempt 2
//g++ p41_message_take2.cpp -o p41_message2.out

#include <iostream>
using std::cin;
using std::cout;

int main () {

	int mode = 1;

	cout<<"Enter a number: ";

	char digitChar = cin.get();
	int digitInt = digitChar - '0';
	char message;

	do {
		digitChar = cin.get();
		while ((digitChar != 10) && (digitChar != 44)) {
			digitInt = (digitInt * 10) + (digitChar - '0'); 
			digitChar = cin.get();
		

	cout<<"The introduced number is: "<<digitInt<<"\n";

	
	if ((digitInt % 27 != 0) && (digitInt % 9 != 0)) {
			switch (mode) {
				case 1:
					message = digitInt + 64;
					//cout<<digitInt % 27;
					break;
				case 2:
					message = digitInt + 96;
					break;
				case 3:
					switch (digitInt % 9) {
						case 1:
							message = 33;
							break;
						case 2:
							message = 63;
							break;
						case 3:
							message = 44;
							break;
						case 4:
							message = 46;
							break;
						case 5:
							message = 32;
							break;
						case 6:
							message = 59;
							break;
						case 7:
							message = 34;
							break;
						case 8:
							message = 39;
							break;
						default:
							break;
					}
				break;
			}

		}
		else {
			if (mode == 1) {
				mode = 2;
			}
			if (mode == 2) {
				mode = 3;
			}
			else{
				mode = 1;
			}
		}
	}
		cout<<message;
	} while (digitChar != 10);

	
	return 0;
}