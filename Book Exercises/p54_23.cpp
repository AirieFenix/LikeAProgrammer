//	Page 54, excercise 2-3
//	Draw a figure like... ah fuck it, seek for it on the book wit #, spaces and EOLs
//	
//  This one wins, sorry, when I have more time :'(

#include <iostream>
using std::cout;

int main (){

	int maxHash = 8;
	int halfStep = 1;

	for (int rows = 0; rows<4; rows++) {
		//First half
		for (int hash = 0; hash < (rows+1)*2; hash++) {
			cout<<"#";
			for (int spaces = 0; spaces <11; spaces++) {
				cout<<"_";
			}
			cout<<"\n";
		}
		
		cout<<"\n";
	}
		/*//Second half
		for (int spaces2 = 7; spaces2<13; spaces2++) {
			cout<<"_";
		}
		for (int hash2 = 8; hash2 < maxHash-abs((rows/2)+1-maxHash); hash2--) {
			cout<<"#";
		}
		cout<<"\n";*/
	
	return 0;
}