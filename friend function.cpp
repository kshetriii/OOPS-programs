#include<iostream>
using namespace std;
class A
{
	private:
		int a = 10;
		int b = 20;
		friend int frnd_function(A a1);
};

int frnd_function(A a1)
{
	return int (a1.a+a1.b);
}

int main()
{
A obj1;
cout<<"The value is= "<<frnd_function(obj1);
return 0;
}

