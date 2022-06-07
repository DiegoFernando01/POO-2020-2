/*
	Introducción a la programación orientada a objetos - Taller 2
	Lunes, 14 de septiembre de 2020
Hecho por: Grupo B
	- Diego Fernando Victoria (1941366)
	- Carlos Andrés Cáceres (1943462)
	- Juan Sebastián Ramírez (1941271)
	- Juan José Castaño (1940966)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { //Método principal
	string operacion;
	int numero1, numero2, numOperacion, respuesta, resultado, numAciertos = 0, intentos = 3, controlador;
	cout << "Bienvenido a: Ejercicios de calculos mentales con operaciones basicas";
	cout << "Reglas: \n1. Debe realizar la operacion propuesta con los numeros dados.\n2. Tiene 3 intentos antes de que finalice el ejercicio.\n3. Despues de cada ronda, se le preguntara si desea salir.";
	do { //Bucle principal
		if (intentos > 0) { //Condicional para seguir jugando según el número de intentos restantes
			do { //Bucle para evitar números aleatorios mayores a 99
				numero1 = 10 + (rand() % 100);
				numero2 = 10 + (rand() % 100);
			} while (((numero1 > 99) || (numero1 < 10))  || (((numero2 > 99) || (numero2 < 10))));
			do { //Bucle para elegir la operación aleatoria a realizar
				numOperacion = 1 + (rand() % 4);
			} while ((numOperacion > 3) || (numOperacion < 1));
			switch (numOperacion) { //Elección de la operación
				case 1: //Operación de suma
					operacion = " + ";
					resultado = numero1 + numero2;
					break;
				case 2: //Operación de resta
					operacion = " - ";
					resultado = numero1 - numero2;
					break;
				case 3: //Operación de multiplicación
					operacion = " * ";
					resultado = numero1 * numero2;
					break;
				case 4: //Operación de división implementada pero no usada debido al gran número de decimales que puede requerir la respuesta del usuario.
					operacion = " / ";
					resultado = numero1 / numero2;
					break;
			}
			cout << "\n\n¿Cuanto es " << numero1 << operacion << numero2 << "?\n";
			cout << "Respuesta: ";
			cin >> respuesta;
			cout << "\n";
			if (respuesta == resultado) { //Comprobación de la respuesta ingresada
				numAciertos++;
				cout << "Felicitaciones, la respuesta es correcta.\n";
				cout << "Numero de aciertos: " << numAciertos << "\n\n";
			} else { //En caso de ser incorrecta la respuesta...
				intentos--;
				cout << "Error, el valor correcto es: " << resultado << "\n";
				cout << "Intentos restantes: " << intentos << "\n\n";
			}
			cout << "¿Desea continuar jugando?\nNumero de aciertos: " << numAciertos << "\nIntentos restantes: " << intentos << "\n";
			do { //Bucle para ingreso de un número válido para seguir practicando o salir.
				cout << "Ingrese 0 para `Si` o 1 para `No`: ";
				cin >> controlador;
				if ((controlador < 0) || (controlador > 1)) {
					cout << "\nDebe ingresar un numero valido.\n";
				} else {
					cout << "\nContinuando...";
				}
			} while ((controlador < 0) || (controlador > 1));
		}
	} while (controlador == 0 && intentos > 0);
	if (intentos == 0) { //Condicional de explicación de la finalización del ejercicio.
		cout << "\n\nNumero de intentos agotados.";
	}
	cout << "\nGracias por practicar.";
} //Fin método principal
