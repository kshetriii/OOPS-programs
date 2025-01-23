#include<iostream>
using namespace std;

class test
{
	private:
int x; int y;
public:
test ()
{
	x=4;
	y=3;
}
~test()		// destructor
{
	cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
}
};
int main()
{
test t;
return 0;
}

