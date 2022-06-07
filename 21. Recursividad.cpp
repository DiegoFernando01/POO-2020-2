//22. Clase 30 de noviembre

#include <iostream>

using namespace std;

/*
void contRecF(int contar)
{
  cout <<"cuenta: "<<contar<< '\n';
  contRecF(contar+1); // contRecF() se llama a sí misma recursivamente  
}

void foo()
{
    foo();
}

void contRecP(int contar)
{
    cout << "Apilar " << contar << '\n';
    if (contar >0){ // Condicion de parada
		contRecP(contar-1);
		}
    cout << "Desapilar " << contar << '\n';
}

void contIt(int num){
while (int i=num){
	num++;
	cout<<"cuenta: "<<num<<endl;
}
}

*/

int suma = 0;

void funcion(int final) {
	if (final > 0) {
		suma += final;
		funcion(final - 1);	
	}
}

int main() {
	//contRecF(5);
	//foo();
	//contRecP(5);
	int n;
	cout << "Ingrese el número hasta el cual desea sumar: ";
	cin >> n;
	cout << endl;
	funcion(n);
	cout << "Suma: " << suma;
	return 0;
}
