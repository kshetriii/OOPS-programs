#include<iostream>
using namespace std;
class rectangle
{
int length ,  breadth , area;
public:
	
	rectangle(int l, int b)
	{
		length= l;
		breadth= b;
	
	}
	friend void operator ++(rectangle&);
	void display ()
	{
		cout<<"length is "<<length<<endl;
		cout<<"breadth is "<<breadth<<endl;
	}
	};
	void operator ++(rectangle& r)
	{
		++r.length;
		++r.breadth;
	}
	int main()
	{
		rectangle r1(5,6);
		operator ++(r1);
		r1.display();
		
		return 0;
		
	}
