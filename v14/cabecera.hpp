#include <iostream>

class Caballo
{
public:
	Caballo(int edadInicial);
	~Caballo();
	int ObtenerEdad() const
	{
		return suEdad;
	}//inline
	void ConfigurarEdad(int edad)
	{
		suEdad = edad;
	}//inline
	void Relinchar() const
	{
		std::cout << "Jiiiiiii, jiiiiiiii\n";
	}//inline

private:
	int suEdad;

};