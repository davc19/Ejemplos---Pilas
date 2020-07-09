#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo* Siguiente;
};

void AgregarPila(Nodo*& pila, int _dato)
{
	Nodo *_nodo = new Nodo();
	_nodo->dato = _dato;
	_nodo->Siguiente = pila;
	pila = _nodo;
}

int main()
{
	int n, rep;
	Nodo* pila = NULL;

	cout << "Tamaño de la Pila : ";
	cin >> rep;

	for (size_t i = 0; i < rep; i++)
	{
		cout << "Ingrese un Nuevo Valor Entero : ";
		cin >> n;

		AgregarPila(pila, n);
	}
}



