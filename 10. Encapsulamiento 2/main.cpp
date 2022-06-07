#include <iostream>
#include "Suma.cpp"

using namespace std;

int main() {
	Suma suma1;
	suma1.setA(100);
	suma1.setB(200);
	int num1 = suma1.getA();
	int num2 = suma1.getB();
	cout << "La suma de " << num1 << " + " << num2 << " es " << suma1.sum() << endl;
	return 0;
}
