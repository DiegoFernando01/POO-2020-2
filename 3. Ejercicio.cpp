#include <iostream>}

using namespace std;

/*
int main() {
	int num, i;
	do {
		cout << "Ingrese el número de parada: ";
		cin >> num;
		cout << "\n";
		if (num <= 10) {
			cout << "El número de parada debe ser mayor a 10";
		}
	} while (num <= 10);
	for (i = 0; i <= num; i += 2) {
		cout << i;
		cout << "\n";
	}
} */

int main() {
	int num1, num2;
	do {
		cin >> num1;
		cin >> num2;
	} while (num1 <= 10 && num2 <= 10);
	for (i = 0; i <= num; i += 2) {
		cout << i;
		cout << "\n";
	}
}
