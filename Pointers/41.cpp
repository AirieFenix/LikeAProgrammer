//	Exercise 4.1, page 109
//
//	DRAFT!! FINISH TOMORROW

#include <iostream>
using std::cin;
using std::cout;

struct node {
	int aNumber;
	node *nextPtr;
};

typedef node *collection;

void addRecord(collection &head, int number);
void printList (collection &head);
void orderList (collection &head);

int main () {

	collection head;
	head -> nextPtr = NULL;

	addRecord(head, 2);
	addRecord(head, 89);
	addRecord(head, 17);
	printList(head);

	orderList(head);
	printList(head);

	return 0;
}

void addRecord(collection &head, int number) {

	node *anInt = new node;

	anInt -> aNumber = number;
	anInt -> nextPtr = head;
	head = anInt;
}

void printList (collection &head) {

	node *tracker = head;

	while (tracker -> nextPtr != NULL) {
		cout << "Number: " << tracker -> aNumber << "\n";
		tracker = tracker -> nextPtr;
	}
}

void orderList (collection &head) {

	node *tracker = new node;
	node *auxTracker = new node;

	tracker = head;

	while (tracker -> nextPtr != NULL) {
		cout << "here!";

		if (tracker -> aNumber > (tracker -> nextPtr)-> aNumber) {
			cout << "here";
			auxTracker = tracker;
			tracker = tracker -> nextPtr;
			tracker -> nextPtr = auxTracker;
		}
	}
}