#include <iostream>
typedef unsigned short int USINT;

int main()
{
	USINT lo = 123;
	using std::cout;
	cout << "USINT size: \t"
		<< sizeof(USINT) << " bytes\n";
	cout << "int size: \t"
		<< sizeof(int) << " bytes\n";
	cout << "short size: \t"
		<< sizeof(short) << " bytes\n";
	cout << "long size: \t"
		<< sizeof(long) << " bytes\n";
	cout << "char size: \t"
		<< sizeof(char) << " bytes\n";
	cout << "float size: \t"
		<< sizeof(float) << " bytes\n";
	cout << "double size: \t"
		<< sizeof(double) << " bytes\n";
	cout << "bool size: \t"
		<< sizeof(bool) << " bytes\n";
	return 0;
}

