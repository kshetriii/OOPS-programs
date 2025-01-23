#include<iostream>
using namespace std;

int &min(int &x , int &y)
{
	if (x<y)
	return x;
	else
	return y;
}

int main()
{
	int a,b,r;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	
	r=min(a,b);
	cout<<"Smallest Number: "<<r<<endl;

return 0;
}

