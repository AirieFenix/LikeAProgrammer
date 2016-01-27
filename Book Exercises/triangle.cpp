#include <iostream>
#include <string>
using std::cin;
using std::cout;

int main () {

int a;
int i;

for (a=5; a>0; a--)
	{
		for (i=a; i>0; i--)
		{
			cout<<"#";
		}
		cout<<"\n";

	}

	return 0;
}