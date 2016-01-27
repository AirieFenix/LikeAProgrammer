// 	Practice on basic of pointers
//	"Binaural beats are weird stuff"

#include <iostream>
using std::cin;
using std::cout;

int main() 
{
  int number = 10;
  int *pointer = &number;

  cout<<"If I use ampersand in number: "<< &number<<"\n";
  cout<<"If I use nothing in number: "<<number<<"\n";
  cout<<"If I use asterisk in pointer: "<<*pointer<<"\n";
  cout<<"If I use nothing in pointer: "<<pointer<<"\n";

  //Playing with NULL pointers:

  int *bPointer;
  bPointer = &number;
  if (bPointer) {
  	cout<<"bPointer with something! Address: "<<&bPointer<<"\n";
  }

  if(!bPointer) {
  	cout<<"bPointer is NULL"<<"\n";
  }

  return 0;

}