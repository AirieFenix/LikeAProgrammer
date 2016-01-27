//	Page 54, excercise 2-2
//	Make this shape only with #, spaces and EOLs
//	
//	   ##
//	  ####
//	 ######
//	########
//	 ######
//	  ####
//	   ##
//	Compile using: g++ p54_22.cpp -o p54_22.out
//
//	"If I have seen further than others, it is by standing upon the shoulders of giants." - Isaac Newton

#include <iostream>
using std::cout;

int main () {

	int rows = 7;
	int columns = 8;

	for (int verticalStep = 1; verticalStep<=rows; verticalStep++) {
		for (int spaceStep = 0 ; spaceStep<(abs(columns-verticalStep*2))/2; spaceStep++) {
			cout<<" ";
		}
		for (int horizontalStep = 0; horizontalStep < columns-abs(columns-verticalStep*2); horizontalStep++) {
			cout<<"#";
		}
		
		cout<<"\n";
	}

	return 0;
}