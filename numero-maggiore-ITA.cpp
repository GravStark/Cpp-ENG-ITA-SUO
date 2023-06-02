#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	
	cout<<"Inserire il primo numero: ";
	cin>>n1;
	
	cout<<"Inserire il secondo numero: ";
	cin>>n2;
	
	if(n1==n2)
		cout<<"I due numeri sono uguali.";
	else if (n1>n2) 
		cout<<"Il numero maggiore e': "<<n1;
	else
		cout<<"Il numero maggiore e': "<<n2;
}