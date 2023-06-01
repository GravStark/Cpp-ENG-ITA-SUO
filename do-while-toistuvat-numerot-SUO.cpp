#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, ".UTF8"); //ä
	int x, summa=0;
	cout<<"Ohjelma jatkaa numeroiden lisäämistä, kunnes syötetään 0!" <<endl;
	do 
	{
		cout<<"Anna numero: " <<endl;
		cin>> x;
		summa=summa+x;
	}
	while (x!=0);
	cout<<"Numeroiden summa on: " <<summa <<endl;
	system ("pause");
	return 0;
}