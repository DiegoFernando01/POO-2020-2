#include <iostream>}

using namespace std;

double num1, num2;
double triangulo() {
	return (num1 * num2) / 2;
}

int main() {
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "\nIngrese el segundo numero: ";
	cin >> num2;
	cout << "\nEl resultado es: " << triangulo();
}
