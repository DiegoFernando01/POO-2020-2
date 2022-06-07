#include <iostream>
using namespace std;
class Nodo
{
private:
    int info = 0;
    Nodo* sig = NULL;
public:
    void setInfo(int _info) {
        this->info = _info;
    }
    int getInfo() {
        return info;
    }

    void setSig(Nodo* _sig) {
        this->sig = _sig;
    }
    Nodo* getSig() {
        return this->sig;
    }
};
//clase pila
class Pila
{
private:
    Nodo* top = NULL;
public:
    Pila() {
        //	top=NULL;
    }
    void push(int info) {//inserta un elemento a la Pila
        Nodo* nuevo = new Nodo(); //Crea un nodo con valor nulo
        nuevo->setInfo(info); //Asigna valor al nodo
        if (top == NULL) //Si la pila está vacía
        {
            top = nuevo; //El nuevo valor es el top
            nuevo->setSig(NULL); //El siguiente valor está vacío
        }
        else
        {
            nuevo->setSig(top); //Pasa el top a siguiente
            top = nuevo; //nuevo pasa a ser top
        }
        cout << "Se agrego el " << info << " a la pila" << endl;
    }
    void peek() {
        if (top != NULL) {
            int info = top->getInfo();
            cout << "El elemento en el top es " << info << endl;
        }
        else {
            cout << "No hay elementos en la pila" << endl;
        }
    }

    void pop()
    {
        //Borra el último elemento insertado en la pila
        if (top != NULL)
        {
            int info = top->getInfo(); //valor que se borra
            Nodo* borrar = top; //Nodo a borrar -> el que está en la cima 
            top = top->getSig(); //Se retorna el valor 
            delete borrar; //Se borra el nodo y se recupera la memoria
            cout << "Se borro el elemento " << info << endl;
        }
        else
        {
            cout << "No hay elementos a borrar, la pila esta vacia" << endl;
        }
    }
    
    void imprimir()
        //Muestra los elementos de la pila
    {
        Nodo* raiz = top; //Puntero para almacenar el primer nodo
        cout << "Elementos de la pila: " << endl;
        if (top == NULL) {
            cout << "Pila vacia";
        }
        else {
            while (raiz != NULL)
            {
                cout << raiz->getInfo() << endl;
                raiz = raiz->getSig();
            }
            cout << endl;
        }
    }

    int main()
    {
        Pila* pila = new Pila();
        int continuar, info;
        do {

            cout << "\n** Seleccione una accion a realizar en la Pila ** \n";
            cout << "1.Apilar 2.Listar 3.Eliminar 4.Ver Top 5.Salir\n";
            cin >> continuar;

            if (continuar > 0 || continuar < 6) {
                switch (continuar) {
                case 1:
                    cout << "Ingrese el valor a apilar: ";
                    cin >> info;
                    pila->push(info);
                    break;
                case 2:
                    pila->imprimir();
                    break;
                case 3:
                    pila->pop();
                    break;
                case 4:
                    pila->peek();
                    break;
                }
            }
            else {
                cout << "Seleccione una opcion valida\n";
            }
        } while (continuar != 5);
        delete pila;
        pila = NULL;
        return 0;
    }
}
