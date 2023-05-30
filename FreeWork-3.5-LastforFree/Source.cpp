#include <iostream>
#include <string>
#include <vector>

using namespace std;

//��� ������������� ������ A ������� N.���������� � ����� �������������
//������ B ��� ������ ����� �� ��������� �������(� ��� �� �������) � �������
//������ ����������� ������� B � ��� ����������.

int main() {
	setlocale(LC_ALL, "RUS");
	int size;
	string msg = "������ �������: ";
	cout << "������� ������ �������: ";
	do {
		cin >> size;
	} while (size <= 0);

	int* mainVector = new int[size];
	cout << "������� �������� �������: ";
	for (int i = 0; i < size; i++) {
		cin >> mainVector[i];
	}

	vector<int> newVector;

	for (int i = 0; i < size; i++){
		if (mainVector[i] % 2 == 0 and mainVector[i] != 0) {
			newVector.push_back(mainVector[i]);
		}
	}

	msg += to_string(newVector.size()) + "\n���������� �������: ";

	for (int i = 0; i < newVector.size(); i++){
		msg += to_string(newVector[i]) + " ";
	}

	cout << msg << endl;

	return 0;
}