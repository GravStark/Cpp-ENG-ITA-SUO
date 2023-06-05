 #include <iostream>
 using namespace std;
 int main ()
{
	setlocale(LC_ALL, ".UTF8"); //ä
	cout<<"Tämä ohjelma näyttää n:n kertotaulukon 5 ensimmäistä numeroa!"<<endl;
	cout<<"Syötä numero väliltä 1-10: ";
	int n;
	cin>>n;
	cout<<endl;
	for (int i=1; i<=5; i=i+1)
		cout<<n*i<<endl;
	return 0;
}
