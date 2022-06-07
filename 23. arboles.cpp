//Arboles
#include <iostream>
//Definicion clase nodo:
using namespace std;
class Nodo
{
	private:
		int info = 0;
		Nodo *izq = NULL;
		Nodo *der = NULL;
	public:

//Implementacion clase nodo

void setInfo(int info){
    this -> info = info;
}
int getInfo(){
    return info;
}

void setIzq(Nodo *izq){
    this -> izq = izq;
}

Nodo* getIzq(){
    return this -> izq;
}

void setDer(Nodo *der){
    this -> der = der;
}

Nodo* getDer(){
    return this -> der;
}
};
//Definicion clase ArbolBinario
class ArbolBinario
{
private:
        Nodo *raiz=NULL;
        int cant = 0;
public:
        ArbolBinario(){	};
        ~ArbolBinario(){
		borrar(raiz);
		};

void borrar(Nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->getIzq());
        borrar(reco->getDer());
        delete reco;
        reco = 0;
    }
}

void insertar(int info)
{
    Nodo *nuevo = new Nodo();
    nuevo->setInfo(info);
    nuevo->setIzq(NULL);
    nuevo->setDer(NULL);
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *anterior=NULL;
        Nodo * reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (info < reco->getInfo())
                reco = reco->getIzq();
            else
                reco = reco->getDer();
        }
        if (info < anterior->getInfo())
            anterior->setIzq(nuevo);
        else
            anterior->setDer(nuevo);
    }
}

void imprimirPre()
{
    imprimirPre(raiz);
    cout << endl;
}

void imprimirPre(Nodo *reco)
{
    if (reco != NULL)
    {
        cout << reco->getInfo() << "-";
        imprimirPre(reco->getIzq());
        imprimirPre(reco->getDer());
    }
}

int cantidad() 
{
    cant = 0;
    cantidad(raiz);
    return cant;
}

void cantidad(Nodo *reco) 
{
    if (reco != NULL) 
    {
        cant++;
        cantidad(reco->getIzq());
        cantidad(reco->getDer());
    }
}
};
//Metodo main
int main()
{
    ArbolBinario *arbol = new ArbolBinario();
    arbol->insertar(400);
    arbol->insertar(100);
    arbol->insertar(50);
    arbol->insertar(75);
    arbol->insertar(200);
    arbol->insertar(800);
    arbol->insertar(900);
    arbol->insertar(600);
    cout<<"Impresion Pre - Orden: ";
    arbol->imprimirPre();
    cout << "Cantidad de Nodos :"<<arbol->cantidad();

    delete arbol;
    arbol = 0;
    return 0;
}

