//	From page 101 of TLaP
//	Build a list of students, and implement "addRecord" and "averageRecord"
//	addRecord(*listOfStudents, int studentNumber, int studentGrade)
//	double averageRecord(*listOfStudents)

#include <iostream>
using std::cin;
using std::cout;

struct node {
	int studentGrade;
	int studentNumber;
	node *nextPtr;
};

typedef node *studentCollection;

void addRecord(studentCollection &head, int number, int grade);
void printList(studentCollection &head);

int main () {

	studentCollection registerHead;
	//cout << registerHead->studentGrade << registerHead->studentNumber;
	registerHead -> nextPtr = NULL;

	addRecord(registerHead, 1, 2);
	addRecord(registerHead, 2, 3);
	addRecord(registerHead, 3, 4);
	//cout << registerHead -> studentNumber << " " << registerHead -> studentGrade;
	//cout << " " << registerHead -> nextPtr;

	printList(registerHead);

	cout<<"\n";
	return 0;
}

void addRecord(studentCollection &head, int number, int grade) {
		
	node *student = new node;

	if (head -> nextPtr == NULL && head -> studentGrade == 0 && head -> studentNumber == 0) {
		student = head;
		student -> studentGrade = grade;
		student -> studentNumber = number;
	}

	else if (head -> nextPtr == NULL && (head -> studentGrade != 0 || head -> studentNumber != 0)) {
		head -> nextPtr = student;
		student -> studentGrade = grade;
		student -> studentNumber = number;
		student -> nextPtr = NULL;
	}

	if (head -> nextPtr != NULL) {
		student = head -> nextPtr;

		while (student -> nextPtr != NULL) {
			student = student -> nextPtr;
		}
		student -> studentGrade = grade;
		student -> studentNumber = number;
		student -> nextPtr = NULL;
	}
}

void printList(studentCollection &head) {
	
	node *tracker = new node;
	tracker = head;

	do {
		cout << "\nStudent: " << tracker -> studentNumber << ", grade: " << tracker -> studentGrade;
		if (tracker -> nextPtr != NULL) {
			tracker = tracker -> nextPtr;
		} 
	} while (tracker -> nextPtr != NULL);
}
