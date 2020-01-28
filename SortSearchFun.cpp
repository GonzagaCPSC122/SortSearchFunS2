#include <iostream>

using namespace std;

void printArray(int[], int);
void insertionSortArray(int[], int);

int main() {
	int nums[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
	int size = 9;

	printArray(nums, size);
	insertionSortArray(nums, size);
	printArray(nums, size);
	return 0;
}

void insertionSortArray(int arr[], int size) {
	int i, j, currValue; // other += 3
	// i = 1 loopControlAssignment++
	for (i = 1; i < size; i++) {
		// i < size loopControlComparison++
		currValue = arr[i];
		j = i - 1;
		while (j >= 0 && currValue < arr[j]) {
			arr[j + 1] = arr[j]; 
			j--;
		}
		arr[j + 1] = currValue;
	}
	// i < size loopControlComparison++
	// for the last time the BC evaluates to
	// false

}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[i] << endl;
}
