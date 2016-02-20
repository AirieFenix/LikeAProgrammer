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

int main () {

	studentCollection registerHead;

	addRecord(registerHead, 42, 24);

	cout << registerHead -> studentNumber;

	cout<<"\n";
	return 0;
}

void addRecord(studentCollection &head, int number, int grade) {

		node *student = new node;
		student -> studentGrade = grade;
		student -> studentNumber = number;
		student -> nextPtr = NULL;
		head = student;
		cout << student << "\n";

		//cout << head -> studentNumber;
}
