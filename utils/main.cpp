#include <iostream>
#include <ctime>
#include "utils.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
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

	int a = 5, b = 10;
	cout << "a = " << a << "; b = " << b << endl;
	mySwap(a, b);
	cout << "a = " << a << "; b = " << b << endl;

	system("pause");
	return 0;
}