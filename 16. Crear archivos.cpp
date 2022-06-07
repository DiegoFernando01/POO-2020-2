//Escribir a un archivo

#include <iostream>
#include <fstream>

using namespace std;

//ofstream

void escribirArchivo(string _linea) {
	ofstream miArchivoE("archivo.txt");
	if(miArchivoE) {
		miArchivoE<<_linea<<"\n";
		cout<<"La linea "<<_linea<<" se escribio en el archivo"<<endl;
	} else {
		cout<<"Error al escribir en el archivo"<<endl;
	}
	miArchivoE.close();
}

int main() {
	string linea {};
	cout<<"Escriba una linea para almacenar en el archivo: ";
	getline(cin, linea);
	escribirArchivo(linea);
}

//ifstream
