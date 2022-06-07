//Diego Fernando Victoria
//Introducción a la programación orientada a objetos
//Lunes 7 de septiembre de 2020

#include <iostream>}

using namespace std;

int main() {
	int num, acumulador = 0;
	cout << "Bienvenido\n";
	cout << "Ingrese los números que desea sumar.\nCuando ya no desee sumar más números, ingrese 0\n\n";
	while (num != 0) {
		cout << "Número que desea ingresar: ";
		cin >> num;
		cout << "\n";
		acumulador += num;
	}
	cout << "El total acumulado en su sumatoria fue de: " << acumulador;
}
