#include<iostream>
using namespace std;
class class_2;
class class_1
{
	int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a:"<<endl;
			cin>>a;
		}
		friend void add(class_1&,class_2&);
};
class class_2
{
	int b;
	public:
		void getdata()
		{
			cout<<"enter the value of b:"<<endl;
			cin>>b;
		}
		friend void add(class_1&,class_2&);
};
void add(class_1& x,class_2& y)
{
	int add;
	add = x.a+y.b;
	cout<<"Addition:"<<add<<endl;
}
int main()
{
	class_1 x;
	x.getdata();
	class_2 y;
	y.getdata();
	add(x,y);
	return 0;
}
