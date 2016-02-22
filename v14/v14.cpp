
#include "cabecera.hpp"

int main()
{
	Caballo Janto(5);
	Janto.Relinchar();
	std::cout << "Janto es un caballo que tiene ";
	std::cout << Janto.ObtenerEdad() << " anos\n";
	Janto.Relinchar();
	Janto.ConfigurarEdad(9);
	std::cout << "Janto ahora tiene ";
	std::cout << Janto.ObtenerEdad() << " anos\n";
	return 0;
}

