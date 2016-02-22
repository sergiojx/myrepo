#include <iostream>

class Caballo
{
public:
	int suEdad;
	int suPeso;
};

int main()
{
	Caballo Janto;
	Janto.suPeso = 110;
	std::cout << "Janto era uno de los caballos de Aquiles. Pesaba ";
	std::cout << Janto.suPeso << " Kilos.\n";

	return 0;
}