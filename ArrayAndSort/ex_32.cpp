//	Find the agent with the highest median sales, based on the struct agents of chapter 3
//	compile: g++ ex_31.cpp -o ex_31.out	
//
//	"I'd like to die in Mars, just not on impact" - Elon Musk

#include <iostream>

using namespace std;

const int NUM_AGENTS = 3;
const int NUM_MONTHS = 12;

void printArray (int someArray[NUM_AGENTS][NUM_MONTHS]);
int compareSales (const void* ptrA, const void* ptrB);
int calcMedians(int salesArray[NUM_AGENTS][NUM_MONTHS], int agent);
int calcHighest(int mediansArray);
int highestMedian(int medians[NUM_AGENTS]);
void printMedians(int medians[NUM_AGENTS]);

int main () {
	int medians[3];

	int sales[NUM_AGENTS][NUM_MONTHS] = {
		{1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
		{5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
		{23, 55, 77, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
	};

	for (int agent = 0; agent < NUM_AGENTS; agent++) {
		qsort (&sales[agent], NUM_MONTHS, sizeof(int),compareSales);
	}

	printArray(sales);

	for (int agent = 0; agent < NUM_AGENTS; agent++) {
		medians[agent] = calcMedians(sales, agent);
	}

	printMedians(medians);

	cout<<"\nThe highest median is: " << highestMedian(medians);

	cout<<"\n";
	return 0;
}

void printArray (int someArray[NUM_AGENTS][NUM_MONTHS]) {
	for (int agent = 0; agent<NUM_AGENTS; agent++) {
		cout<<"\nAgent number "<<agent + 1 << ": ";
		for (int month = 0; month < NUM_MONTHS; month++) {
			cout<<someArray[agent][month]<<" ";
		}
		cout<<"\n";
	}
}

void printMedians(int medians[NUM_AGENTS]) {

	cout<<"\n";
	for (int agent = 0; agent < NUM_AGENTS; agent++) {
		cout<<"Median for agent " << agent + 1 << "= "<< medians[agent] << "\n";
	}
	
}

int compareSales (const void* intA, const void* intB) {
	int* ptrA = (int*) intA;
	int* ptrB = (int*) intB;

	return *ptrA - *ptrB;
} 

int calcMedians(int salesArray[NUM_AGENTS][NUM_MONTHS], int agent){

	int median;
		
		if (NUM_MONTHS % 2 == 0) {
			median = ((salesArray[agent][(NUM_MONTHS/2)-1]) + (salesArray[agent][NUM_MONTHS/2])) / 2;
		}
		else {
			median = salesArray[agent][(NUM_MONTHS / 2)];
		}
	
	return median;
}

int highestMedian(int medians[NUM_AGENTS]) {
	int highest = medians[0];

	for (int agent = 1; agent < NUM_AGENTS; agent++) {
		if (medians[agent] > highest) {
			highest = medians[agent];
		}
	}

	return highest;
}