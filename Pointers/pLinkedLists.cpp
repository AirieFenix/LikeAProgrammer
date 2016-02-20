//	Personal approach (I don't remember anything) to linked lists
//	
//	
//	Ale Zuvic, 09.02.2016

#include <iostream>
using std::cin;
using std::cout;

struct node {
	int myInt;
	char myChar;
	node *nextNode;
};

//struct* createNode(int passedInt, char passedChar);
void createNode (node *first, int anInt, char aChar);

int main() {

	cout << "\nCreating node\n";

	node *root;
	root = new node;
	root -> nextNode = NULL;
	root -> myInt = 1;
	root -> myChar = 'a';

	createNode(root, 2, 'b');

	while (int i != 0) {
		cout << 
	}

	return 0;
}

void createNode (node first, int anInt, char aChar) {

	node *auxNode = new node;
	auxNode -> myInt = anInt;
	auxNode -> myChar = aChar;

	if (first -> nextNode == NULL) {
		first -> nextNode = auxNode;
	}
}