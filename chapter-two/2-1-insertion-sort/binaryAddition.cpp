#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
	for ( int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << endl;
}

int main() {
	int A [] = {1,0,1,1};
	int B [] = {0,1,1,1};
	int arrlength = sizeof(A)/sizeof(A[0]);
	int C [arrlength + 1];

	bool carry = false;
	for (int i = arrlength - 1; i > -1; i--) {
		int digitSum = A[i] + B[i];
		if (carry) {
			digitSum += 1;
			carry = false;
		}
		C[i + 1] = digitSum % 2;
		if (digitSum > 1) {
			carry = true;
		}
	}
	if (carry) {
		C[0] = 1;
	}
	else {
		C[0] = 0;
	}

	//after this chapter i am switching to vectors so I can put all this in a function
	//without needing to pass in a size parameter.
	printArray(C, arrlength + 1);
	return 0;
}
