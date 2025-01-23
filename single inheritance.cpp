#include<iostream>
using namespace std;

class parent
{
	protected:
		int a,b;
		public:
		void input()
		{
			cout<<"Enter the value of a and b:: "<<endl;
			cin>>a>>b;
		}
};

class child : public parent
{
	public:
	void display()
	{
		input();
		cout<<"The sum of a and b is:: "<<(a+b);
	}
};

int main()
{
	child c1;
//	c1.input();
	c1.display();
	return 0;
}
