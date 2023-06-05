#include <iostream>
using namespace std;
int main()
{
	system("color 0a");
	int x,y;
	cout<<"Inserisci valore iniziale: " <<endl;
	cin>> x;
	cout<<"Inserisci valore finale: " <<endl;
	cin>> y;
	int cont=0;
	cout<<"I numeri pari compresi tra "<<x<<" e "<<y<<" sono: "<<endl;
	for (int i=x; i<=y; i=i+1)
	{
		if (i%2==0)
		{
		cout<<i <<endl;
		cont=cont+1;
		}
	}
	cout <<"Ho stampato " <<cont <<" numeri pari" <<endl;
	system ("pause");
	return 0;
}

