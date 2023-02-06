// practice with dynamic arrays
// we cannot let the user determine the size of an array unless we use pointers
// principle: if you must allocate memory, then you must deallocate it when you no longer need it
// 7-8-2022

#include<iostream>
using namespace std;

int findMax(int myArray[], int size) {
	int max = myArray[0];
	for (int i = 1;i <= size;i++) {
		if (myArray[i]> max)
			max = myArray[i];
	}
	return max;
}

int main() {
	int size;
	cout << "Array size: ";
	cin >> size;

	// allocate memory for array using pointer (NEW command)
	int* myArray = new int[size];

	for (int i = 0;i < size;i++) {
		cout << "Array[" << i << "] = ";
		cin >> myArray[i];
	}

	for (int i = 0;i < size;i++) {
		cout << myArray[i] << "  ";
	}

	cout << "max is: " << findMax(myArray, size);

	//deallocate memory and have the pointer point to nothing
	delete[]myArray;
	myArray = NULL;

	system("pause>0");
}