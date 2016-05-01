#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	for ( int i = 0; i < size; i++ ) {
		std::cout << arr[i] << ' ';
	}
	std::cout << endl;
}

void ReverseInsertionSort(int arr[], int size) {
	for ( int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while ( j > -1 and arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
}
int main()
{
	int A [6] = {31, 41, 59, 26, 41, 58};
	int lengthOfA = sizeof(A) / sizeof(A[0]);
	std::cout << "Pre reverse insertion sort" << endl;
	printArray(A,lengthOfA);
	ReverseInsertionSort(A, lengthOfA);
	std::cout << "Post reverse insertion sort" << endl;
	printArray(A, lengthOfA);	
	return 0;
} 

