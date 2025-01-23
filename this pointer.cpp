#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
		public:
			A(int a , int b)
			{
				this -> a = a;
				this -> b = b;
			}
			
			void showdata()
			{
				cout<<a<<"			"<<b;
			}
};

int main()
{
A obj1(10,20);
obj1.showdata();
return 0;
}

