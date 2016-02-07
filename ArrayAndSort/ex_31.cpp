//	Use qsort to sort the students in chapter 3, by grade, then by ID and such
//	compile: g++ ex_31.cpp -o ex_31.out
//	"Stay hungry, stay foolish" - Steve Jobs
//	Ale Zuvic, 02.02.16

#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
	int grade;
	int studentID;
};

const int MAX_SIZE = 10;

void printArray(student studentArray[]) {
	for (int i = 0; i<MAX_SIZE; i++) {
		cout << studentArray[i].name << ": \n\t-Grade: " << studentArray[i].grade << "\n\t-ID: " << studentArray[i].studentID << "\n";
	}
}

int compareGrade(const void* ptrA, const void* ptrB) {
	student* structA = (student*) (ptrA);
	student* structB = (student*) (ptrB);

	return structB->grade - structA->grade;
}

int compareID(const void* ptrA, const void* ptrB) {
	student* structA = (student*) ptrA;
	student* structB = (student*) ptrB;

	return structA->studentID - structB->studentID;
}

int compareName(const void* ptrA, const void* ptrB) {
	student* structA = (student*) ptrA;
	student* structB = (student*) ptrB;

	return strcmp(&structA->name[0], &structB->name[0]);
}

int main (){

	int option;
	student studentArray[MAX_SIZE] = {
		{"Fred",87, 10001},
		{"Silke",56, 10009},
		{"George",33, 10003},
		{"Hewitt",77, 10002},
		{"Sheldon",100, 10023},
		{"Sarah",54, 10011},
		{"Micha",28, 10033},
		{"Ale",11, 10015},
		{"Adriana",29, 10044},
		{"Nerea",92, 10007},
	};

	cout<<"Do you want to sort array by Grade (1), ID (2) or Name (3)? Enter option: ";
	cin>>option;

	switch (option){
		case 1:
			qsort(studentArray, MAX_SIZE, sizeof(student),compareGrade);
			printArray(studentArray);	
			break;
		case 2:
			qsort(studentArray, MAX_SIZE, sizeof(student), compareID);
			printArray(studentArray);
			break;
		case 3:
			qsort(studentArray, MAX_SIZE, sizeof(student), compareName);
			printArray(studentArray);
			break;
		default:
			cout<<"\n Invalid option.\n";
	}

	//(sizeof(studentArray)/sizeof(student))
	
	return 0;
}