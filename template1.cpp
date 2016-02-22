#include <iostream>
#include <string>

using namespace std;

const char * nameArr[4] = {
	"Carlos",
	"Mancito",
	"Manola",
	"Rodomirfo"
};
class People
{
public:
	People():name("Nonw"),edad(10){}
	~People(){}
	const char * getName(){ return name; }
	int getEdad(){ return edad; }
	void setNameAndAge(const char *newName, int newEdad);
	bool operator>(People people);
private:
	const char *name;
	int edad;
};


void People::setNameAndAge(const char *newName, int newEdad)
{
	name = newName;
	edad = newEdad;
}

bool People::operator>(People people)
{
	if (edad > people.edad)
		return true;
	else
		return false;
}
template <class T>
T max(T x, T y) {
	return (x > y) ? x : y;
};


template <class T>
class Tabla {
public:
	Tabla(int nElem);
	~Tabla();
	T& operator[](int indice) { return pT[indice]; }

private:
	T *pT;
	int nElementos;
};

// Definición:
template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
	pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
	delete[] pT;
}

//Class tempalte declaration
template <class T>
class MyTable
{
public:
	MyTable(int nElem);
	~MyTable();
	T& operator[] (int indice){ return pT[indice]; }
private:
	T *pT;
	int nElementos;
};

template <class T>
MyTable<T>::MyTable(int nElem) : nElementos(nElem){
	pT = new T[nElementos];
}

template <class T>
MyTable<T>::~MyTable()
{
	delete[] pT;
}



int main()
{
	MyTable<People> peopleTable(4);
	for (int i = 0; i < 4; i++)
	{
		peopleTable[i].setNameAndAge(nameArr[i], (i + 12));
		cout << "name " << peopleTable[i].getName() << endl;
		cout << "edad " << peopleTable[i].getEdad() << endl;
	}
	if (peopleTable[3] > peopleTable[1])
	{
		cout << peopleTable[3].getName() << " es mayor que " << peopleTable[1].getName() << endl;
	}
	else
	{
		cout << peopleTable[3].getName() << " es menor que " << peopleTable[1].getName() << endl;
	}
	return 0;
}