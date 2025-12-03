#include <iostream>
#include <ctime>
#include "utils.h"

using namespace std;

int getRandomInt(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main() {
	srand(time(NULL));

	int row = 3, col = 3;
	double** array = createArray<double>(row, col);

	if (array == NULL) {
		system("pause");
		return 0;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = getRandomInt(10, 99) + 0.5;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}