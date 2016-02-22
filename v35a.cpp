#include <iostream>
using namespace std;

enum{menor, mayor, igual};

class Datos
{
public:
	Datos(int newVal) :valor(newVal){}
	~Datos(){}
	int comparar(const Datos &data);
	void mostrar(){ cout << valor << "\n"; }
private:
	int valor;
	
};

int Datos::comparar(const Datos &data)
{
	if (valor < data.valor)
	{
		return menor;
	}
	if (valor > data.valor)
	{
		return mayor;
	}
	else
	{
		return igual;
	}
}

class Node;
class NodeHead;
class NodeTail;
class NodeInterno;

class Nodo
{
public:
	Nodo(){}
	virtual ~Nodo(){}
	virtual Nodo * insert(Datos *datos) = 0;
	virtual void mostrar() = 0;
};

class NodoInterno :public Nodo
{
public:
	NodoInterno(Datos *datos, Nodo *siguiente);
	virtual ~NodoInterno(){ delete siguiente; delete datos; }
	virtual Nodo* insert(Datos *otrosDatos);
	virtual void mostrar()
	{
		datos->mostrar(); siguiente->mostrar();
	}
private:
	Datos *datos;
	Nodo *siguiente;
};

NodoInterno::NodoInterno(Datos *datos, Nodo *siguiente) :datos(datos), siguiente(siguiente)
{

}

Nodo* NodoInterno::insert(Datos *otrosDatos)
{
	//es el valor del nuevo opjeto Datos mas grnade o mas pequeño que el propio??
	int resultado = datos->comparar(*otrosDatos);

	switch (resultado)
	{
		case igual:
		case mayor:
		{
					  NodoInterno *datosNodo = new NodoInterno(otrosDatos, this);
					  return datosNodo;
		}
		break;
		case menor:
		{
					  siguiente = siguiente->insert(otrosDatos);
					  return this;
		}
		break;
	}
	return this;
}

// El nodo cola es solo un centinela
class NodoTail: public Nodo
{
public:
	NodoTail(){}
	virtual ~NodoTail(){}
	virtual Nodo * insert(Datos * datos);
	virtual void mostrar(){}
private:

};

Nodo * NodoTail::insert(Datos *datos)
{
	NodoInterno * datosNodo = new NodoInterno(datos, this);
	return datosNodo;
}

class NodoHead : public Nodo
{
public:
	NodoHead();
	virtual ~NodoHead(){ delete siguiente; }
	virtual Nodo * insert(Datos *datos);
	virtual void mostrar(){ siguiente->mostrar(); }
private:
	Nodo *siguiente;

};

NodoHead::NodoHead()
{
	siguiente = new NodoTail;
}

Nodo * NodoHead::insert(Datos *datos)
{
	siguiente = siguiente->insert(datos);
	return this;
}


class ListaEnlazada
{
public:
	ListaEnlazada();
	~ListaEnlazada(){ delete head; }
	void insert(Datos *datos);
	void mostrarTodo(){ head->mostrar();}
private:
	NodoHead *head;
};

ListaEnlazada::ListaEnlazada()
{
	head = new NodoHead;
}

void ListaEnlazada::insert(Datos *pDatos)
{
	head->insert(pDatos);
}

int main()
{
	Datos* pDatos;
	int val;
	ListaEnlazada ll;

	while (true)
	{
		cout << "Que valor?? (0 para detener)?";
		cin >> val;
		if (!val)
		{
			break;
		}
		pDatos = new Datos(val);
		ll.insert(pDatos);
	}
	ll.mostrarTodo();
	return 0;

}





