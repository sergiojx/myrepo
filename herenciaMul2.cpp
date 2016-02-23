#include <iostream>
#include <cstring>
using namespace std;

class Persona {
public:
	Persona(char *n) { strcpy(nombre, n); }
	const char *LeeNombre() const { return nombre; }
protected:
	char nombre[30];
};

class Empleado : virtual public Persona {
public:
	Empleado(char *n, int s) : Persona(n), salario(s) {}
	int LeeSalario() const { return salario; }
	void ModificaSalario(int s) { salario = s; }
protected:
	int salario;
};

class Estudiante : virtual public Persona {
public:
	Estudiante(char *n, float no) : Persona(n), nota(no) {}
	float LeeNota() const { return nota; }
	void ModificaNota(float no) { nota = no; }
protected:
	float nota;
};

class Becario : public Empleado, public Estudiante {
public:
	Becario(char *n, int s, float no) :
		Empleado(n, s), Estudiante(n, no), Persona(n) {} // (1)
};

int main() {
	Becario Fulanito("Fulano", 1000, 7);

	cout << Fulanito.LeeNombre() << ","
		<< Fulanito.LeeSalario() << ","
		<< Fulanito.LeeNota() << endl;

	return 0;
}