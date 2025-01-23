#include<iostream>
using namespace std;
// int a,b;                                 i did this in exam and its not wrong.
void exchange(int &a, int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
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
