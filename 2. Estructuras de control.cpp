//Diego Fernando Victoria
//Introducci�n a la programaci�n orientada a objetos
//Lunes 7 de septiembre de 2020

#include <iostream>}

using namespace std;

int main() {
	int placa;
	do {
		cout << "Ingrese el �ltimo d�gito de la placa de su veh�culo: ";
		cin >> placa;
		if (placa < 0) {
			cout << "\nEl n�mero de placa ingresado no puede ser menor a 0\n\nIntente nuevamente...\n";
		} else if (placa > 9) {
			cout << "\nEl n�mero de placa ingresado no puede ser mayor a 9\n\nIntente nuevamente...\n";
		}
	} while (placa < 0 || placa > 9);
	switch (placa) {
		case 1: case 2:
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as lunes\n";
			break; 
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as lunes\n";
			break; 
		case 3: case 4:
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as martes\n";
			break; 
		case 5: case 6:
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as mi�rcoles\n";
			break;
		case 7: case 8:
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as jueves\n";
			break;
		case 9: case 0:
			cout << "\nSeg�n su la placa de su veh�culo, tiene restricci�n de movilidad los d�as viernes\n";
			break;
		default: 
			cout << "Error";
			break;
	}
}
