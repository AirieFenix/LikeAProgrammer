#include <iostream>
using std::cin;
using std::cout;

/*Trying to output a figure like the following


#
##
###
####
###
##
#

*/

//using variables with better naming, like row and hashNumb

int main() {
	for (int row=1; row<=7; row++){
		
		//Reasoning 1
		//for (int hashNumb=1; hashNumb<=4-abs(row-4); hashNumb++) {
			//cout<<hashNumb;
		//	cout<<"#";
		//}

		//Reasoning 2
		//I don't get why this works
		for (int hashNumb=4; hashNumb>abs(row-4); hashNumb--){
			cout<<"#";
		}
		cout<<"\n";
	}
	
	return 0;
}