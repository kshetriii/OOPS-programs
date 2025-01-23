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
		
		area = l*b;
	}
	void operator --()
	{
		--length;
		--breadth;
	}
	void display ()
	{
		cout<<"length is "<<length<<endl;
		cout<<"breadth is "<<breadth<<endl;
	}};
	int main()
	{
		rectangle r1(5,6);
		--r1;							//r1.operator ++();
		r1.display();
		
		return 0;
		
	}
