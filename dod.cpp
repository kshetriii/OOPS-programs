#include<iostream>
using namespace std;

class Rectangle
{
	private:
		
	int length;
	int breadth;
	int area;
	public:
	void setdata(int l , int b)
	{
		length = l;
		breadth = b;
		
		area = l*b;
	}
	
	void display()
	{
		cout<<"The area of the rectangle is:: "<<area<<endl;
	}
};

int main()
{
Rectangle r;
r.setdata(5,4);
r.display();

return 0;
}

