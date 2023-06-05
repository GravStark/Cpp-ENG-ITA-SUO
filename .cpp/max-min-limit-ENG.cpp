#include <iostream>
using namespace std;
int  main()
{
	int n,x,min,max;
	cout<<"How many numbers you wnat to enter?" <<endl;
	cin>> n;
	cout<<"Enter the maximum value: " <<endl;
	cin>>max;
	cout<<"Enter the minimum value: " <<endl;
	cin>>min;
	int counter=0;
	for (int i=1;i<=n;i=i+1)
    {
		cout<<"Enter a number: " <<endl;
		cin>> x;
		if(x<=max && x>=min)
			counter=counter+1;
	}
	cout<<"You have entered "<<counter <<" values within the range."<<endl;
	system("PAUSE");
	return 0;
}
