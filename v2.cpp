#include <iostream>

int add(int primero, int segundo)
{
	std::cout << "En add(), recibio " << primero << "y" << segundo << "\n";
	return (primero + segundo);
}

int main()
{
	using std::cout;
	using std::cin;

	cout << "Estamos en main()\n";
	int a, b, c;
	cout << "Esciba 2 numeros: ";
	cin >> a;
	cin >> b;
	cout << "\n llamar add() \n";
	c = add(a, b);
	cout << "\n de vuelta en main()  \n";
	cout << "c fue configurado como " << c;
	cout << "\n Saliendo ...\n\n";
	return 0;




}