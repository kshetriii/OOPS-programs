#include<iostream>
using namespace std;
class rectangle
{
	int l,b,area;
	
	/* here, i used private specifier and it will not allow to access the member function inside
	the class so we will make a public specifier and call the both memeber function into it then at the 
	last, we will call that member function that contains both other private member function and call that 
	new public member function by creating r1.(...) */
	
	private:
	void getdata()
{
		
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;

area= l*b;

}
	void display()
{
	cout<<"the area is "<<area;
}

public:
	void both()
	{
		getdata();
		display();
	}
};

int main()

{
rectangle r1;
r1.both();

return 0;
}
