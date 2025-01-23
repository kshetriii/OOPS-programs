// Write a program in C++ to find the sum of the n natural numbers.

#include<iostream>
using namespace std;

int main()
{

	int i=1,n,sum=0;
	cout<<"How many natural numbers do you want to find the sum of?---> ";
	cin>>n;
	
	cout<<"The first "<<n<<" natural numbers are:-"<<endl;
	for(i ; i<=n ; i++)
	{
			cout<<i<<endl;
		sum=sum+i;	
	}

	cout<<"\nThe sum of first ten natural number is = "<<sum<<endl;
return 0;
}							

