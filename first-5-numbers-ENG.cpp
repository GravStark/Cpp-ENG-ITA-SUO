 #include <iostream>
 using namespace std;
 int main ()
{
	cout<<"This program shows you the first 5 numbers of the multiplication table of n!"<<endl;
	cout<<"Enter a number from 1 to 10: ";
	int n;
	cin>>n;
	cout<<endl;
	for (int i=1; i<=5; i=i+1)
		cout<<n*i<<endl;
	return 0;
}