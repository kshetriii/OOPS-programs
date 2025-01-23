#include<iostream>
using namespace std;

void exchange(int *a, int *b)
{
	int *c;
	c=a;
	a=b;
	b=c;
	cout<<"pointer value"<<endl;
	cout<<*a<<" and "<<*b<<endl;
}

int main()
{
	int x,y;
	x=4;
	y=5;

	cout<<"The value of x and y before exchange are "<<x<<" and "<<y<<endl;
	cout<<"\nAfter the exchange"<<endl;
	exchange(&x,&y);
	cout<<"\nThe value of x and y are "<<x<<" and "<<y<<endl;
	
	return 0;
}
