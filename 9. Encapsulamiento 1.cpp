#include <iostream>
using namespace std;

/*
class Empleado {
	int salario;
	public:
		//setter
		void setSalario(int s) {
			salario = s;
		}
		//getter
		int getSalario() {
			return salario;
		};
};

int main() {
	Empleado emp1;
	emp1.setSalario(50000);
	cout << emp1.getSalario();
	return 0;
}

---------

class Suma{
	private:
		int a=0, b=0;
	public:
		int sum(){
			return a + b;
		}
		int getNumA() {
			return a;
		};
		int getNumB() {
			return b;
		};
		void setNumA(int num1) {
			a = num1;
		}
		void setNumB(int num2) {
			b = num2;
		}
};

int main() {
  Suma suma1;
  suma1.setNumA(100);
  suma1.setNumB(200);

 cout<<suma1.sum()<<endl;


 return 0;
}
*/


class triangulo {
	private:
		double altura = 0, base = 0;
	public:
		void setBase(int valor) {
			base = valor;
		}
		void setAltura(int valor) {
			altura = valor;
		}
		double getBase() {
			return 	base;
		}
		double getAltura() {
			return altura;
		}
		double getArea() {
			return ((base * altura) / 2);
		}
};

int main() {
	double numB, numA;
	triangulo objeto;
	do {
		cout << "\nIngrese la base del triangulo: ";
		cin >> numB;
	} while (numB <= 0);
	objeto.setBase(numB);
	cout << "\nIngrese la altura del triangulo: ";
	cin >> numA;
	objeto.setAltura(numA);
	cout << "\n\nEl area del triangulo de base: " << objeto.getBase() << ", y altura: " << objeto.getAltura() << ", es: " << objeto.getArea() << "." << endl;
	return 0;
}

