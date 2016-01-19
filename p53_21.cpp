//	Page 53, ex:2-1
//	Make this shape with only one single character output (#,space, or EOL)
// 	########
//	 ######
//	  ####
//	   ##
//	Compile using: g++ p53_21.cpp -o p53_21.out
//	"Ad astra per aspera"

#include <iostream>
using std::cin;
using std::cout;

int main () {
	int rows = 4;
	int columns = 8;

	for (int step=0; step<rows; step++) {
		
		for (int spaceStep=0; spaceStep<=step; spaceStep++) {
			cout<<" ";
		}
		
		for (int inStep=0; inStep<columns-(step*2); inStep++) {
			cout<<"#";
		}
		cout<<"\n";
	}

	return 0;
}
