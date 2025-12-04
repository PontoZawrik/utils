#include <iostream>
#include <ctime>
#include "utils.h"

using namespace std;

int getRandomInt(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main() {
	srand(time(NULL));

	int row = 10, col = 10;
	double** array = NULL;

	try {
		array = createArray<double>(row, col);
	}
	catch (...) {
		cout << "Ошибка при создании массива." << endl;
		system("pause");
		return 0;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = getRandomInt(10, 99);
		}
	}

	printArray(array, row, col);

	deleteArray(array, row);

	system("pause");
	return 0;
}