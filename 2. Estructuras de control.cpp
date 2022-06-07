//Diego Fernando Victoria
//Introducción a la programación orientada a objetos
//Lunes 7 de septiembre de 2020

#include <iostream>}

using namespace std;

int main() {
	int placa;
	do {
		cout << "Ingrese el último dígito de la placa de su vehículo: ";
		cin >> placa;
		if (placa < 0) {
			cout << "\nEl número de placa ingresado no puede ser menor a 0\n\nIntente nuevamente...\n";
		} else if (placa > 9) {
			cout << "\nEl número de placa ingresado no puede ser mayor a 9\n\nIntente nuevamente...\n";
		}
	} while (placa < 0 || placa > 9);
	switch (placa) {
		case 1: case 2:
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días lunes\n";
			break; 
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días lunes\n";
			break; 
		case 3: case 4:
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días martes\n";
			break; 
		case 5: case 6:
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días miércoles\n";
			break;
		case 7: case 8:
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días jueves\n";
			break;
		case 9: case 0:
			cout << "\nSegún su la placa de su vehículo, tiene restricción de movilidad los días viernes\n";
			break;
		default: 
			cout << "Error";
			break;
	}
}
