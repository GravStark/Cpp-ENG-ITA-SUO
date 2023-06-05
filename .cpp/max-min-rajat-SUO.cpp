#include <iostream>
using namespace std;
int  main()
{
	setlocale(LC_ALL, ".UTF8"); //ä
	int n,x,min,max;
	cout<<"Kuinka monta numeroa haluat syöttää?" <<endl;
	cin>> n;
	cout<<"Syötä enimmäisarvo: " <<endl;
	cin>>max;
	cout<<"Syötä vähimmäisarvo: " <<endl;
	cin>>min;
	int laskuri=0;
	for (int i=1;i<=n;i=i+1)
    {
		cout<<"Syötä numero: " <<endl;
		cin>> x;
		if(x<=max && x>=min)
			laskuri=laskuri+1;
	}
	cout<<"Olet saapunut "<<laskuri <<" arvot alueella."<<endl;
	system("PAUSE");
	return 0;
}
