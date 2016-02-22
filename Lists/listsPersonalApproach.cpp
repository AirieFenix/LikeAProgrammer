//	From page 101 of TLaP
//	Build a list of students, and implement "addRecord" and "averageRecord"
//	addRecord(*listOfStudents, int studentNumber, int studentGrade)
//	double averageRecord(*listOfStudents)
//	Made with a help from the book. Shit pointers are impossible :(
//	
//	“The struggle you’re in today is developing the strength you 
//	need for tomorrow” - Unknown
//	Ale Zuvic 22.2.16

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
double averageRecord(studentCollection head);
void printList(studentCollection &head);

int main () {

	studentCollection registerHead;
	//cout << registerHead->studentGrade << registerHead->studentNumber;
	registerHead -> nextPtr = NULL;

	addRecord(registerHead, 1, 2);
	addRecord(registerHead, 2, 3);
	addRecord(registerHead, 3, 4);
	addRecord(registerHead, 45, 187);
	//cout << registerHead -> studentNumber << " " << registerHead -> studentGrade;
	//cout << " " << registerHead -> nextPtr;

	printList(registerHead);
	cout << "\nThe average grade of the collection is: " << averageRecord(registerHead);

	cout<<"\n";
	return 0;
}

void addRecord(studentCollection &head, int number, int grade) {
		
	node *student = new node;

	student -> studentGrade = grade;
	student -> studentNumber = number;
	student -> nextPtr = head;

	head = student;
}

double averageRecord (studentCollection head) {

	node *tracker = head;
	double gradesSum = 0;
	int nodes = 0;

	if (tracker -> nextPtr == NULL || head == NULL) {
		return 0;
	}

	while (tracker -> nextPtr != NULL) {
		nodes++;
		gradesSum += tracker -> studentGrade;
		tracker = tracker -> nextPtr;
	};

	return (double) (gradesSum / nodes);
}

void printList(studentCollection &head) {
	
	node *tracker = new node;
	tracker = head;

	while (tracker -> nextPtr != NULL) {
		cout << "\nStudent: " << tracker -> studentNumber << ", grade: " << tracker -> studentGrade;
		tracker = tracker -> nextPtr;
		//cout << tracker -> nextPtr;
	};
}
