#include <iostream>

class Caballo
{
public:
	//accessors publicos
	Caballo(unsigned int edadInicial);
	~Caballo();
	unsigned int ObtenerEdad();
	void ConfigurarEdad(unsigned int);

	unsigned int ObtenerPeso();
	void CofigurarPeso(unsigned int Peso);

	void Relinchar();

private:
	unsigned int suEdad;
	unsigned int suPeso;


};

Caballo::Caballo(unsigned int edadInicial)
{
	suEdad = edadInicial;
}

Caballo::~Caballo()
{

}

unsigned int Caballo::ObtenerEdad()
{
	return suEdad;
}

void Caballo::ConfigurarEdad(unsigned int edad)
{
	suEdad = edad;
}

unsigned int Caballo::ObtenerPeso()
{
	return suPeso;
}

void Caballo::CofigurarPeso(unsigned int Peso)
{
	suPeso = Peso;
}

void Caballo::Relinchar()
{
	std::cout << "hiiiii, hiiiii \n";
}


int main()
{
	Caballo Janto(6);
	//Janto.ConfigurarEdad(5);
	Janto.Relinchar();
	std::cout << "janto es un caballo que tiene ";
	std::cout << Janto.ObtenerEdad() << " anos\n";
	Janto.Relinchar();
	return 0;

}