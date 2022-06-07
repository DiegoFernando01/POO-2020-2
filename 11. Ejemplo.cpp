#include <iostream>
using namespace std;
class Persona{
//super clase
private:
	int id;
	string apellidos, nombres;
public:
	string getApellidos(){
		return apellidos;
	}
	string getNombres(){
		return nombres;
	}
	void setApellidos(string _apellidos){
		this->apellidos=_apellidos;
	}
	void setNombres(string _nombres){
		this->nombres=_nombres;
	}		
};
class Empleado: public Persona{
//clase hija - padre
private:
	double salario;
public:
	void setSalario(double _salario){
		this->salario=_salario;
	}
	double getSalario(){
		return salario;
	}	
};
class Gerente : public Empleado {
//Clase hija - nieta
	private:
	double bonificacion;
	public:
		void aumentarBonif(){
 			this->bonificacion=getSalario()*1.05;
		}
		double getBonif(){
			return bonificacion;
		}		
};
int main(){
	Gerente g1;
	g1.setApellidos("Duarte");
	g1.setNombres("Jorge");
	g1.setSalario(500);
	g1.aumentarBonif();
	cout<<g1.getNombres()<<" "<<g1.getApellidos()<<endl;
	cout<<"Salario + bonif: "<<g1.getBonif();
}


