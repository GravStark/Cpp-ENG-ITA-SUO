#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	
	cout<<"Enter the first number: ";
	cin>>n1;
	
	cout<<"Enter the second number: ";
	cin>>n2;
	
	if(n1==n2)
		cout<<"The two numbers are the same.";
	else if (n1>n2) 
		cout<<"The greater number is: "<<n1;
	else
		cout<<"The greater number is: "<<n2;
}