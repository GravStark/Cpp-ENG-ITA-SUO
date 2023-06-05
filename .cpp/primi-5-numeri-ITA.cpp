 #include <iostream>
 using namespace std;
 int main ()
{
	cout<<"Questo programma ti mostra i primi 5 numeri della tabellina di n!"<<endl;
	cout<<"Inserisci un numero tra 1 e 10: ";
	int n;
	cin>>n;
	cout<<endl;
	for (int i=1; i<=5; i=i+1)
		cout<<n*i<<endl;
	return 0;
}
