#include <iostream>
class SimpleCaballo{
public:
	SimpleCaballo(){ suEdad = 2;
	suPeso = new int(6);
	}
	~SimpleCaballo(){
		delete suPeso;
	}
	int ObtenerEdad() const { return suEdad; }
	void ConfigurarEdad(int edad){ suEdad = edad; }
	int ObtenerPeso() const { return *suPeso; }
	void ConfigurarPeso(int peso){ *suPeso = peso; }
private:
	int suEdad;
	int *suPeso;
};

int main()
{
	using namespace std;
	SimpleCaballo *Eclipse = new SimpleCaballo;
	cout << "Edad actual de Eclipse: " << Eclipse->ObtenerEdad() << endl;
	cout << "Peso actual de Eclipse: " << Eclipse->ObtenerPeso() << endl;
	(*Eclipse).ConfigurarEdad(20);
	cout << "Nueva Edad de Eclipse: " << Eclipse->ObtenerEdad() << endl;
	delete Eclipse;
	return 0;
}