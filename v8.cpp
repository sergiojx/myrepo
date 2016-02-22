#include <iostream>

int Area(int x, int y);

int main()
{
	using std::cout;
	using std::cin;
	 
	int x, y, a;
	cout << "Introdusca 2 numeros \n";
	cin >> x;
	cin >> y;
	cout << "los valores introducidos son: " << x << " y " << y << "\n";
	a = Area(x, y);
	cout << "El area resultante es: " << a << "\n";
	return 0;
}

int Area(int x, int y)
{
	return (x * y);
}