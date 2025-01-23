#include<iostream>
using namespace std;

int area(int l , int b)
{
	return (l*b);
}

int area (int l)
{
	return (l*l);
}

int main()
{
	int sa,ra;
	sa=area(5);
	ra=area(5,4);
	cout<<"The area of square is "<<sa<<endl;
	cout<<"The area of rectangle is "<<ra<<endl;

	return 0;
}
