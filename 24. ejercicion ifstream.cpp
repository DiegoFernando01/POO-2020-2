#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main() {

	vector <string> nombre = {"carlos","diego","camilo"};// vectores de ejemplo
	vector <int> nums = {2,3,1};//vectores de ejemplo
	vector <string> lista;

//***codigo para crear el archivo de texto***

	string nomArchivo="archivoprueba.txt"; // noombrar el archivo
	ofstream miarchivo(nomArchivo); //Crea el archivo
	for(int i = 0; i<nums.size(); i++) {
		miarchivo << nums.at(i) <<"... "<< nombre.at(i) <<"\n" ; //Escribir en el archivo
	}
	miarchivo.close();//Cierre el archivo

//***codigo para leer el archivo de texto y alamecarlo en un vector vacio para ordenarlo***
//ifstream miarchivo("archivoprueba.txt");// abrir archivo
	string texto;
	while (getline(miarchivo, texto)) {
		lista.push_back(texto); // Salida del texto del archivo
	}
//***
	string aux;
//***codigo organizar el vector de mayor a menor***
	for(int i=0; i<lista.size(); i++) {
		for(int j=0; j<lista.size()-1; j++) {
			if(lista[j] > lista[j+1]) {
				aux = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = aux;
			}
		}
	}
	for(int i=0; i<lista.size(); i++) {
		cout<<lista[i]<<" "<<endl;
	}
//***y por ultimo generamos un nuevo archivo con el vector que tenemos***
//al utlizar el vector se deberia borrar los datos almacenados para una ves despues de utlizado se pueda usar otras ves
	return 0;
}
