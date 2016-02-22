#include <iostream>


float convertir(float);

int main()
{
	using namespace std;
	float TempFar;
	float TempCel;
	cout << "Introdusca la temperatura en grados Farenheit \n";
	cin >> TempFar;
	TempCel = convertir(TempFar);
	cout << "la temperature en grados celci es: " << TempCel << "\n";
	return 0;
}

float convertir(float  temFar)
{
	float TempCel;

	TempCel = ((temFar - 32) * 5) / 9;
	return TempCel;

}