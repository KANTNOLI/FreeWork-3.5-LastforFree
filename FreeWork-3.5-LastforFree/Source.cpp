#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Дан целочисленный массив A размера N.Переписать в новый целочисленный
//массив B все четные числа из исходного массива(в том же порядке) и вывести
//размер полученного массива B и его содержимое.

int main() {
	setlocale(LC_ALL, "RUS");
	int size;
	string msg = "Размер массива: ";
	cout << "Введите размер массива: ";
	do {
		cin >> size;
	} while (size <= 0);

	int* mainVector = new int[size];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < size; i++) {
		cin >> mainVector[i];
	}

	vector<int> newVector;

	for (int i = 0; i < size; i++){
		if (mainVector[i] % 2 == 0 and mainVector[i] != 0) {
			newVector.push_back(mainVector[i]);
		}
	}

	msg += to_string(newVector.size()) + "\nСодержимое массива: ";

	for (int i = 0; i < newVector.size(); i++){
		msg += to_string(newVector[i]) + " ";
	}

	cout << msg << endl;

	return 0;
}