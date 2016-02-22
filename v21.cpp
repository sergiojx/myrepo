#include <iostream>

int main()
{
	using namespace std;
	int variableLocal = 5;
	int *pLocal = &variableLocal;
	int *pHeap = new int;
	*pHeap = 7;

	cout << "variableLocal: " << variableLocal << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;
	pHeap = new int;
	*pHeap = 17;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;

	return 0;
}