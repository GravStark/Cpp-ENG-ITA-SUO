#include <iostream>
using namespace std;
int main()
{
	system("color 0a");
	int x,y;
	cout<<"Enter initial value: " <<endl;
	cin>> x;
	cout<<"Enter final value: " <<endl;
	cin>> y;
	int counter=0;
	cout<<"Even numbers between "<<x<<" and "<<y<<" are: "<<endl;
	for (int i=x; i<=y; i=i+1)
	{
		if (i%2==0)
		{
		cout<<i <<endl;
		counter=counter+1;
		}
	}
	cout <<"I printed " <<counter <<" even numbers" <<endl;
	system ("pause");
	return 0;
}
