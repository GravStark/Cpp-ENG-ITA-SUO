#include <iostream>
using namespace std;
int  main()
{
	int n,x,min,max;
	cout<<"Quanti numeri vuoi inserire?" <<endl;
	cin>> n;
	cout<<"Inserisci il valore massimo: " <<endl;
	cin>>max;
	cout<<"Inserisci il valore minimo: " <<endl;
	cin>>min;
	int cont=0;
	for (int i=1;i<=n;i=i+1)
    {
		cout<<"Inserisci un numero: " <<endl;
		cin>> x;
		if(x<=max && x>=min)
			cont=cont+1;
	}
	cout<<"Hai inserito "<<cont <<" valori compresi nell'intervallo." <<endl;
	system("PAUSE");
	return 0;
}

