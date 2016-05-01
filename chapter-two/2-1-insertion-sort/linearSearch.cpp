#include <iostream>
using namespace std;

int LinearSearch(int arr[], int value) {
	//not implemented, ran into something called array decay and couldn't
	//get length of array that was passed in. If I was interested in single responsibility
	//I would just use another collection i think? As we move on and I get more used
	//to vim, c++, and algorithms in general, hopefully the quality of code will go up.
}

int main() {
	int A [] = {31,41,59,26,58};
	int searchTerm = 26;
	int arrlength = sizeof(A)/sizeof(A[0]);
	for ( int i = 0; i < arrlength; i++) {
		if (A[i] == searchTerm) {
			std::cout << searchTerm << " found at index " << i << endl;
			return i;
		}
	}
	std::cout << searchTerm << " not found in array" << endl;
	//not sure if I can return this, i'm not going to get held up on this though. 
	//I'm sure as I refamiliarize with c++ these details will come back.
	return NULL;
}
