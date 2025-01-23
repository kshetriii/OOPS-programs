#include<iostream>
using namespace std;
class rectangle
{
	public:				// we can place public: here and also

	int l,b,area;
	
	// public:
	
	void getdata()
{
		
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;

/* not to ask input and print the result do this */
// l=5;
// b=6;


area= l*b;

}
	void display()
{
	cout<<"the area is "<<area;
}
};

int main()

{
rectangle r1;
r1.getdata();
r1.display();

return 0;
}
