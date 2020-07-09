#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo* Siguiente;
};

void AgregarPila(Nodo*&, int);
void EliminarPila(Nodo*&, int&);

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

	cout << endl << "Eliminar elementos de la pila : " << endl;
	while (pila != NULL)
	{
		EliminarPila(pila, n);
		if (pila != NULL)
			cout <<"Eliminado " << n << endl;
		else
			cout << n << " Final de la Pila" << endl;

	}

	system("pause");
	return 0;
}

void AgregarPila(Nodo*& pila, int _dato)
{
	Nodo* _nodo = new Nodo();
	_nodo->dato = _dato;
	_nodo->Siguiente = pila;
	pila = _nodo;
}

void EliminarPila(Nodo*& pila, int& _dato)
{
	Nodo* aux = pila;
	_dato = aux->dato;
	pila = aux->Siguiente;
	delete aux;
}
