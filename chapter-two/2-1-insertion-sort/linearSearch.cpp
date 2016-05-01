#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int value) {
	for ( int i = 0; i < size; i++) {
		if (arr[i] == value) {
			std::cout << value << " found at index " << i << endl;
			return i;
		}
	}
	std::cout << value << " not found in array" << endl;
	//not sure if I can return this, i'm not going to get held up on this though. 
	//I'm sure as I refamiliarize with c++ these details will come back.
	return NULL;
}


int main() {
	int A [] = {31,41,59,26,58};
	int searchTerm = 26;
	int arrlength = sizeof(A)/sizeof(A[0]);

	//call the search, not sure how useful it is since I'm not sure if
	//a return of null is cool for a function that's supposed to return int
	//but we will at least get output if we find the term or not
	LinearSearch(A, arrlength, searchTerm);
	return 0;
}
