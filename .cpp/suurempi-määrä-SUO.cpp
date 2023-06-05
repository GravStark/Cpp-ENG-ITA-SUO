#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8"); //ä
	int n1, n2;
	
	cout<<"Syötä ensimmäinen numero: ";
	cin>>n1;
	
	cout<<"Anna toinen numero: ";
	cin>>n2;
	
	if(n1==n2)
		cout<<"Nämä kaksi numeroa ovat samat.";
	else if (n1>n2) 
		cout<<"Suurempi luku on: "<<n1;
	else
		cout<<"Suurempi luku on: "<<n2;
}
