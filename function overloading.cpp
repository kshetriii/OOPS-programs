#include<iostream>
using namespace std;

int mul(int a, int b)
{
	return (a*b);
	
}

float mul(float a, float b)
{
	return (a*b);
}
int main()
{
	int x=5,y=4;
	float n=2.0,m=3.0;
cout<<"The multiply of a*b is "<<mul(x,y);
cout<<"\n"<<endl;
cout<<"The multiply of a*b is "<<mul(m,n);
cout<<"\n"<<endl;
cout<<"The multiply of a*b is "<<mul(3,6);
return 0;
}

