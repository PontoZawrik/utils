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

	if (array != NULL) {
		for (unsigned i = 0; i < row; i++) {
			array[i] = new T[col];

			if (array[i] == NULL) {
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


double* createDouble(unsigned size) {
	double* array = new double[size];
	return array;
}

double** createDouble(unsigned row, unsigned col) {
	double** array = new double* [row];

	if (array != NULL) {
		for (unsigned i = 0; i < row; i++) {
			array[i] = new double[col];

			if (array[i] == NULL) {
				deleteArray(array, i);
				break;
			}
		}
	}

	return array;
}


int* createInt(unsigned size) {
	int* array = new int[size];
	return array;
}

int** createInt(unsigned row, unsigned col) {
	int** array = new int* [row];

	if (array != NULL) {
		for (unsigned i = 0; i < row; i++) {
			array[i] = new int[col];

			if (array[i] == NULL) {
				deleteArray(array, i);
				break;
			}
		}
	}

	return array;
}


char* createChar(unsigned size) {
	char* array = new char[size];
	return array;
}

char** createChar(unsigned row, unsigned col) {
	char** array = new char* [row];

	if (array != NULL) {
		for (unsigned i = 0; i < row; i++) {
			array[i] = new char[col];

			if (array[i] == NULL) {
				deleteArray(array, i);
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