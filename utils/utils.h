#pragma once
#include <iostream>

int getRandomInt(long int min, long int max) {
	return min + rand() % (max - min + 1);
}

double getRandomFloat(double min, double max) {
	return min + (max - min) / RAND_MAX * rand();
}


template <typename T>
T* createArray(unsigned size) {
	T* array = new T[size];
	return array;
}

template <typename T>
T** createArray(unsigned row, unsigned col) {
	T** array = new T* [row];

	unsigned count = 0;
	try {
		for ( ; count < row; count++) {
			array[count] = new T[col];
		}
	}
	catch (...) {
		for (unsigned i = 0; i < count; i++) {
			delete[] array[i];
		}

		delete[] array;
		throw;
	}

	return array;
}


template <typename T>
void deleteArray(T** array, unsigned size) {

	for (unsigned i = 0; i < size; i++) {
		delete[] array[i];
	}
	delete[] array;

	return;
}


template <typename T>
void printArray(T array, unsigned size) {

	for (unsigned i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	return;
}

template <typename T>
void printArray(T array, unsigned row, unsigned col) {

	for (unsigned i = 0; i < row; i++) {
		for (unsigned j = 0; j < col; j++) {
			std::cout << array[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return;
}


template <typename T> void mySwap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;

	return;
}