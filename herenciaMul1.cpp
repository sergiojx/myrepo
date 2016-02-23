#include <iostream>
using namespace std;

class ClaseA {
public:
	ClaseA() : valorA(10) {}
	ClaseA(int va) : valorA(va) {}
	int LeerValor() const { return valorA; }
protected:
	int valorA;
};

class ClaseB {
public:
	ClaseB() : valorB(20) {}
	ClaseB(int vb) : valorB(vb) {}
	int LeerValor() const { return valorB; }
protected:
	int valorB;
};

class ClaseC : public ClaseA, public ClaseB {
public:
	ClaseC(int va, int vb) : ClaseA(va), ClaseB(vb) {};
	int LeerValorA() const { return ClaseA::LeerValor(); }
	int LeerValorB() const { return ClaseB::LeerValor(); }
};

int main() {
	ClaseC CC(12, 14);

	cout << CC.LeerValorA() << ","
		<< CC.LeerValorB() << endl;

	return 0;
}