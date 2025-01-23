#include<iostream>
using namespace std;
class A
{
	private:
		int length;
		int breadth;
		public:
			void setdata(int l,int b)
			{
				length = l;
				breadth = b;
			}
			void showdata()
			{
				cout<<"lenght = "<<length;
				cout<<"\n breadth = "<<breadth<<endl;
			}
				friend class B;
};
class B
{
	public:
	void display(A a)
	{
		int total;
		total = a.length + a.breadth;
		cout<<"The total is = "<<total<<endl;
	}
};
int main()
{
A obj1;
B obj2;
obj1.setdata(10,20);
obj1.showdata();
obj2.display(obj1);

return 0;
}

