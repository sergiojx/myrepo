#include <iostream>

int main()
{
	const int NON = 123;
	enum Meses
	{
		Enero,
		Febrero,
		Marzo,
		Junio,
		Julio,
		Agosto
	};

	Meses ahora;

	ahora = Agosto;
	if (ahora == Enero || ahora == Febrero || ahora == 2)
	{
		std::cout << "Estamos en invierno \n";
	}
	else
	{
		std::cout << "Estamos en verano \n";
	}
}