#include<iostream>
using namespace std;

void function(int &a, const int &b)
{
	a=10;
}
int main()
{
int x=100,y=200;
function(x,y);
cout<<x<<"           "<<y;
return 0;
}

