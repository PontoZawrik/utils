#pragma once
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