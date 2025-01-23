#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
	public:
Rectangle(int l, int b)
	{
		length= l;
		breadth= b;
		
	}
Rectangle(Rectangle &r)
{
	length = r.length;
	breadth = r.breadth;
}

void display()
{
	cout<<"the value of length is "<<length<<" and breadth is "<<breadth<<endl;
}
};

int main()
{
Rectangle r1(8,6);
r1.display();
Rectangle r2(r1);
r2.display();
return 0;
}

