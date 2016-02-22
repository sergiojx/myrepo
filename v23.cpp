#include <iostream>

using namespace std;

typedef enum _ERR
{
	EXITO,
	ERROR
}ERROR_e;

ERROR_e Factor(int n, int *pCuadrado, int *pCubo);
ERROR_e FactorByRef(int n, int &Cuadrado, int &Cubo);

int main()
{
	int numero, cuadrado, cubo;
	short error;
	cout << "Escribe un numero (0-20): ";
	cin >> numero;
	//error = Factor(numero, &cuadrado, &cubo);
	error = FactorByRef(numero, cuadrado, cubo);
	if (!error)
	{
		cout << "numero: " << numero << endl;
		cout << "cuadrado: " << cuadrado << endl;
		cout << "cubo: " << cubo << endl;

	}
	else
	{
		cout << "Error encontrado" << endl;
	}
}

ERROR_e Factor(int n, int *pCuadrado, int *pCubo)
{
	if (n > 20)
	{
		return ERROR;
	}
	else
	{
		*pCuadrado = n*n;
		*pCubo = n*n*n;
		return EXITO;
	}
}

ERROR_e FactorByRef(int n, int &Cuadrado, int &Cubo)
{
	if (n > 20)
	{
		return ERROR;
	}
	else
	{
		Cuadrado = n*n;
		Cubo = n*n*n;
		return EXITO;
	}
}