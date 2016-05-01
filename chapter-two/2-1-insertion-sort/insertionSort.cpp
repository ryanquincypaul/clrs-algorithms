#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	for ( int i = 0; i < size; i++ ) {
		std::cout << arr[i] << ' ';
	}
	std::cout << endl;
}

int main()
{
	int A [6] = {31, 41, 59, 26, 41, 58};
	int lengthOfA = sizeof(A) / sizeof(A[0]);
	std::cout << "Pre insertion sort" << endl;
	printArray(A,lengthOfA);	
	for ( int i = 1; i < lengthOfA; i++)
	{
		int key = A[i];
		int j = i - 1;
		while ( j > -1 and A[j] > key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
	std::cout << "Post insertion sort" << endl;
	printArray(A, lengthOfA);	
	return 0;
} 

