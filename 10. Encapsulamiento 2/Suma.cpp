#include "Suma.h"

void Suma::setA(int x) { 
	this -> a = x;
}

void Suma::setB(int y) { 
	this -> b = y;
}

int Suma::getA() { 
	return a;
}

int Suma::getB() {
	return b;
}

int Suma::sum() {
	return a + b;
}
