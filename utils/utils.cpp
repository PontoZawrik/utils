#include <iostream>
using namespace std;


template <typename T> 
void deleteArray(T** array, unsigned size) {

	for (unsigned i = 0; i < size; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = NULL;

	return;
}


template <typename T> 
T* createArray(unsigned size) {
	T* array = new T[size];
	return array;
}

template <typename T>
T** createArray(unsigned row, unsigned col) {
	T** array = new T* [row];

	if (!array) {
		for (unsigned i = 0; i < row; i++) {
			array[i] = new T[col];

			if (!array[i]) {
				for (unsigned j = 0; j < i; j++) {
					delete[] array[i];
				}

				delete[] array;
				array = NULL;
				break;
			}
		}
	}

	return array;
}


template <typename T>
void printArray(T array, unsigned size) {

	for (unsigned i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return;
}

template <typename T>
void printArray(T array, unsigned row, unsigned col) {

	for (unsigned i = 0; i < row; i++) {
		for (unsigned j = 0; j < col; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	return;
}