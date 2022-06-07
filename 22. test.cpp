#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
using namespace std;
void leerArchivo(string _nombre);
void ordenarPtjes(vector <string> * _nombres, vector <string> * _ptjes);

void leerArchivo(string _nombre) {
	ifstream miArchivol(_nombre);
	if(miArchivol) {
		string linea {};
		vector <string> nombres, ptjes;
		int fn=0;
		int sig=0;
		while(getline(miArchivol, linea, '\n')) {
			string nombre="";
			string ptje="";
			for (int i =0; i<linea.length(); i++) {
				if(linea[i]=='\t') {
					fn=i;
//			cout<<i<<endl;
				}
			}
			for (int j=0; j<fn; j++) {
				nombre+=linea[j];
			}
			for (int k=fn+1; k<linea.length(); k++) {
				ptje+=linea[k];
			}
			nombres.push_back(nombre);
			ptjes.push_back(ptje);
			cout<<nombres[sig]<<": ";
			cout<<ptjes[sig]<<endl;
			sig++;
		}
		ordenarPtjes(&nombres, &ptjes);
		miArchivol.close();
	} else {
		cout<<"Error al leer el archivo"<<endl;
	}
}

void ordenarPtjes(vector <string> * _nombres, vector <string>* _ptjes) {
	//Algoritmo de ordenacion
}
int main() {
	setlocale(LC_ALL, "");
	string nombre {};
//	cout<<"Escriba el nombre del archivo a leer: ";
	//cin>>nombre;
	nombre="test.txt";
	leerArchivo(nombre);
	return 0;
}

