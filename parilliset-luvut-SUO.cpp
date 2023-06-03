#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".UTF8"); //ä
	system("color 0a");
	int x,y;
	cout<<"Syötä alkuarvo: " <<endl;
	cin>> x;
	cout<<"Syötä lopullinen arvo: " <<endl;
	cin>> y;
	int laskuri=0;
	cout<<"Parilliset luvut välillä "<<x<<" ja "<<y<<" ovat: "<<endl;
	for (int i=x; i<=y; i=i+1)
	{
		if (i%2==0)
		{
		cout<<i <<endl;
		laskuri=laskuri+1;
		}
	}
	cout <<"Tulostin " <<laskuri <<" parilliset luvut" <<endl;
	system ("pause");
	return 0;
}