#include <iostream>
using namespace std;

enum RAZA { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mamifero
{
public:
	Mamifero();
	~Mamifero();

	int ObtenerEdad() const{ return suEdad; }
	void ConfigurarEdad(int edad){ suEdad = edad; }
	int ObtenerPeso() const{ return suPeso; }
	void ConfigurarPeso(int peso){ suPeso = peso; }

	void Hablar() const{ cout << "Sonido Mamiferos. \n"; }
	void Dormir() const{ cout << "shhh, Estoy durmiendo.\n"; }

protected:
	int suEdad;
	int suPeso;
};

Mamifero::Mamifero() :suEdad(3), suPeso(5)
{
	cout << "Constructor Mamifero..." << endl;
}
Mamifero::~Mamifero()
{
	cout << "Destrctor Mamifero..." << endl;
}


class Perro : public Mamifero
{
public:
	Perro();
	~Perro();

	RAZA obtenerRaza() const{ return suRaza; }
	void ConfigurarRaza(RAZA raza){ suRaza = raza; }
	void MoverCola() const { cout << "Cola Moviendose...\n"; }
	void PedirComida() const { cout << "Pidiendo Comida...\n"; }

protected:
	RAZA suRaza;

};

Perro::Perro() :suRaza(GOLDEN)
{
	cout << "Constructor Perro..." << endl;
}

Perro::~Perro()
{
	cout << "Destructor Perro..." << endl;
}

int main()
{
	Perro Model;
	Model.Hablar();
	Model.MoverCola();
	cout << "Model tiene " << Model.ObtenerEdad() << " anos de edad\n";
	return 0;
}