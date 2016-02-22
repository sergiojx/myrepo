#include <iostream>

using namespace std;

class SimpleCaballo
{
public:
	SimpleCaballo();
	~SimpleCaballo();
private:
	int suEdad;
};
SimpleCaballo::SimpleCaballo()
{
	cout << "Constructor llamado " << endl;
	suEdad = 1;
}

SimpleCaballo::~SimpleCaballo()
{
	cout << "Destructor llamado. " << endl;
}


int main()
{
	cout << "SimpleCaballo Eclipse..." << endl;
	SimpleCaballo Eclipse;
	cout << "Edad de Eclipse " << endl;
	cout << "memory address: " << &Eclipse << endl;
	cout << "SimpleCaballo *pPuntero = new SimpleCaballo..." << endl;
	SimpleCaballo *pPuntero = new SimpleCaballo;
	cout << "memory address: " << pPuntero << endl;
	cout << "delete pPuntero... " << endl;
	delete pPuntero;
	cout << "Chao!!!" << endl;
	return 0;
}