#include <iostream>

using namespace std;

class SimpleCaballo
{
public:
	SimpleCaballo();
	SimpleCaballo(SimpleCaballo &caballo);
	~SimpleCaballo();
	int ObtenerEdad() const;
	void ConfigurarEdad(int edad);
private:
	int suEdad;
};

SimpleCaballo::SimpleCaballo()
{
	cout << "Simple Caballo Constructor..." << endl;
	suEdad = 1;
}

SimpleCaballo::SimpleCaballo(SimpleCaballo &caballo)
{
	cout << "Simple Caballo Copia Constructor..." << endl;
}
int SimpleCaballo::ObtenerEdad() const
{
	return suEdad;
}

void SimpleCaballo::ConfigurarEdad(int edad)
{
	suEdad = edad;
}

SimpleCaballo::~SimpleCaballo()
{
	cout << "Simple Caballo Destructor..." << endl;
}
SimpleCaballo FuncionUno(SimpleCaballo elcaballo);
SimpleCaballo* FuncionDos(SimpleCaballo *elcaballo);
const SimpleCaballo * const FuncionTres(const SimpleCaballo * const elcaballo);

int main()
{
	cout << "Creando un Caballo.." << endl;
	SimpleCaballo Juaquin;
	//cout << "Llamando FuncionUno" << endl;
	//FuncionUno(Juaquin);
	//cout << "Llamando FuncionDos" << endl;
	//FuncionDos(&Juaquin);
	cout << "Juaquin tiene " << Juaquin.ObtenerEdad() << " anos de edad\n";
	int edad = 5;
	Juaquin.ConfigurarEdad(edad);
	cout << "Juaquin tiene " << Juaquin.ObtenerEdad() << " anos de edad\n";
	cout << "Llamando FuncionTres" << endl;
	FuncionTres(&Juaquin);
	

	return 0;
}



SimpleCaballo FuncionUno(SimpleCaballo elcaballo)
{
	cout << "FuncionUno Devolviedo..." << endl;
	return elcaballo;
}

SimpleCaballo* FuncionDos(SimpleCaballo *elcaballo)
{
	cout << "FuncionDos Devolviendo..." << endl;
	return elcaballo;
}

const SimpleCaballo * const FuncionTres(const SimpleCaballo * const elcaballo)
{
	cout << "Funcion Tres Devolviendo..." << endl; 
	cout << "Juaquin tiene ahora " << elcaballo->ObtenerEdad() << " anos de edad\n";
	//This is not corrent couse elcaballo is a constant pointer to a constanpbject.
	//This way just access to const opject's members ia alowed
	//elcaballo->ConfigurarEdad(8);
	
	return elcaballo;
}