#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
	public:
		Rectangle()
		{
			length=breadth=4;
		}
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
	Rectangle r1;//(4,5);          // if we don't pass the argument here then the value of the lenght and breadth remains 0.
Rectangle r2(8,6);
Rectangle r3(r2);
r1.display();
r2.display();
r3.display();
return 0;
}

