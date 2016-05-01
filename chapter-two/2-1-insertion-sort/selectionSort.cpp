#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	for ( int i = 0; i < size; i++ ) {
		std::cout << arr[i] << ' ';
	}
	std::cout << endl;
}

void SelectionSort(int arr[], int size) {
	for (int i = 0; i < (size - 1); i++) {
		int min = arr[i];
		int minIndex = i;
		for ( int j = (i + 1); j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}
		int toSwap = arr[i];
		arr[i] = min;
		arr[minIndex] = toSwap;
	}
}

int main() {
	int A [] = {31,41,59,26,41,58};
	int sizeOfA = sizeof(A)/sizeof(A[0]);
	std::cout << "Array pre selection sort: ";
	printArray(A,sizeOfA);
	SelectionSort(A,sizeOfA);
	std::cout << "Array post selection sort: "; 
	printArray(A, sizeOfA);
	return 0;
}
