#include <iostream>
//Polimorfismo
using namespace std;

class FiguraG {
	protected:
		string nombre="";
	private:
		double area=0;
	public:
		FiguraG(string _nombre):nombre(_nombre) {}
		double getArea();
		string getFigura() {
			return nombre;
		}
};

class Cuadrado:public FiguraG {
		double lado;
	public:
		Cuadrado(string _nombre, double _lado):FiguraG(_nombre),lado(_lado) {}
		double getArea() {
			return lado*lado;
		}
};

class Triangulo: public FiguraG {
	double base, altura;
	public:
		Triangulo(string _nombre, double _base, double _altura): FiguraG(_nombre), base(_base), altura(_altura){}
		double getArea() {
			return ((base * altura) / 2);
		}
};

class Rectangulo: public FiguraG {
	double ladoA, ladoB;
	public:
		Rectangulo(string _nombre, double _ladoA, double _ladoB): FiguraG(_nombre), ladoA(_ladoA), ladoB(_ladoB){}
		double getArea() {
			return (ladoA * ladoB);
		}
};

int main() {
	FiguraG figura0();
	Cuadrado figura1("Cuadrado", 2);
	cout << figura1.getFigura() << ": " << figura1.getArea() << endl;
	Triangulo figura2("Triangulo", 2, 2);
	cout << figura2.getFigura() << ": " << figura2.getArea() << endl;
	Rectangulo figura3("Rectangulo", 2, 4);
	cout << figura3.getFigura() << ": " << figura3.getArea() << endl;
	
}
