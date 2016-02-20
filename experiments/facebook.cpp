#include <iostream>
using std::cin;
using std::cout;

void startProfileName();
void stopProfileName();
char *address;

char add[] = "https://www.facebook.com/hanna.ka.9461";
char addOnes[] = "https://www.facebook.com/monicker.monica?fref=nf";
char addOne[]="https://www.facebook.com/celmyss?fref=pb&hc_location=friends_tab&pnref=friends.all";

int main () {

	char letter = 0;
	address = new char;

	startProfileName();
	cout<<address<<"\n";

	stopProfileName();
	cout<<"\n"<<address;

	cout << "\n";
	return 0;
}

void startProfileName() {
	int counter = 0;
	int slashCounter = 0;

	cout << "\n";

	while (addOne[counter] != 0 && slashCounter < 3) {
		counter++;

		if(addOne[counter] == 47) {
			slashCounter++;
		}

		if(slashCounter == 3) {
			address = &addOne[counter + 1];
		}
	}
}


void stopProfileName() {
	int counter = 0;
	while (address[counter] != 0) {
		counter++;

		if (address[counter] == 63) {
			address[counter] = 0;
		}
	}
}