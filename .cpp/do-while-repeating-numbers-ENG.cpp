#include <iostream>
using namespace std;
int main() 
{
	int x, sum=0;
	cout<<"The program will continue adding numbers until a 0 is entered!" <<endl;
	do 
	{
		cout<<"Enter a number: " <<endl;
		cin>> x;
		sum=sum+x;
	}
	while (x!=0);
	cout<<"The sum of the numbers is: " <<sum <<endl;
	system ("pause");
	return 0;
}
