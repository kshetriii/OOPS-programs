#include<iostream>
using namespace std;
class A
{
	private:
		int length;
		static int breadth;
		public:
			void setdata(int l, int b)
			{
				length = l;
				breadth = b;
			}
			
			void showdata()
			{
				cout<<"lenght = "<<length<<endl;
				cout<<"breadth = "<<breadth<<endl;
			}
			
			static void display()
			{ 
			// cout<<"lenght = "<<length<<endl;			// this cannot be accessed because it is non static data member.
			cout<<"breadth = "<<breadth<<endl;
			}
};

int A :: breadth = 0;			// jati declare garepni hunxa but ideal is zero.
int main()
{
A obj1,obj2;
obj1.setdata(10,20);
obj1.showdata();
obj2.setdata(100,200);
obj2.showdata();
obj1.display();
obj2.display();
A::display();
obj1.showdata();

return 0;
}

