#include <iostream>
using namespace std;
//cuantos numeros queremos guardar

int main (){
	int n;
	
	int *var;
	cout << "Cuantos numeros desea ingresar: " << endl;
	cin >> n;
	int arreglo [n];
	var = new int [n]
	for (int i=0, i<n; i++)
	{
		cout << "Numeros a ingresar: " << endl;
		cin >> arreglo [i];
	}
	for (int i=0, i<n; i++)
	{
		cout >> arreglo [i];
	}
	delete [] var;
	return 0;
	 
}
