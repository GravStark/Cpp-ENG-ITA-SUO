#include <iostream>
using namespace std;
int main() 
{
	int x, somma=0;
	cout<<"Il programma continuera' a sommare numeri fino a quando non verra' inserito uno 0!" <<endl;
	do 
	{
		cout<<"Inserire un numero: " <<endl;
		cin>> x;
		somma=somma+x;
	}
	while (x!=0);
	cout<<"La somma dei numeri e': " <<somma <<endl;
	system ("pause");
	return 0;
}

