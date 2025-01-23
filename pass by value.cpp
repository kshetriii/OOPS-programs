#include<iostream>
using namespace std;

void exchange(int a, int b)
{
	int c=a;
	a=b;
	b=c;
//	cout<<"\n";
//	cout<<a<<" and "<<b;
//	cout<<"\n";
}

int main()
{
	int x,y;
	x=4;
	y=5;
	

	cout<<"The value of x and y before exchange are "<<x<<" and "<<y<<endl;
	cout<<"\n After the exchange"<<endl;
	
		exchange(x,y);
	cout<<"\nThe value of x and y are "<<x<<" and "<<y<<endl;
	
	return 0;
}
