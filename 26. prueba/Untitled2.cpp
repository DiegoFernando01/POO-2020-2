#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector <string> nombre = {"zully","diego","camilo"};// vectores de ejemplo
vector <int> nums = {10,20,1};//vectores de ejemplo
vector <string> lista;

void agregar (string archivo,vector <string> nombre, vector <int> puntaje) {

	ofstream miarchivo(archivo);
	for(int i = 0; i < puntaje.size() && i < nombre.size() ; i++) {
		miarchivo <<puntaje.at(i) <<" "<< nombre.at(i) <<"\n" ;
	}

	miarchivo.close();

}

void vectorParaOrganizar (string archivo) {
	ifstream miarchivo(archivo);
	string texto;
	while (getline (miarchivo, texto)) {
		lista.push_back(texto);
	}

	string aux;

	for(int i=0; i<lista.size(); i++) {
		for(int j=0; j<lista.size()-1; j++) {
			if(lista[j] < lista[j+1]) {
				aux = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = aux;
			}
		}
	}
	for(int i=0; i<lista.size(); i++) {
		cout<<lista[i]<<" "<<endl;
	}

}

void listaNueva(string archivo) {
	ofstream miarchivo(archivo);
	for(int i = 0; i < lista.size(); i++) {
		miarchivo <<lista.at(i)<<"\n" ;
	}
}

int main() {

	string nombreArchivo {};
	nombreArchivo="registro.txt";
	string nomArchivo="registro.txt";
	ofstream miarchivo(nomArchivo);
	agregar(nombreArchivo,nombre,nums);
	vectorParaOrganizar(nomArchivo);
	listaNueva(nomArchivo);

	return 0;

}
