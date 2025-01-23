#include<iostream>
using namespace std;

void mul(int a, int b=2)
{
	int m;
	m=a*b;
	cout<<"\nThe product is:: "<<m;
}

int main()
{
mul(12);
mul(5,4);
return 0;
}

