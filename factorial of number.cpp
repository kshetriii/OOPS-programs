// Write a program in C++ to find the factorial of a number.

#include<iostream>
using namespace std;

int main()
{
	int num,fact=1;
	cout<<"Enter the number you want to find factorial of: ";
	cin>>num;
	
	for(int i=1 ; i<=num ; i++)
	{
		fact= fact * i;					// fact = 1 * 1
										// fact = 1 * 2
										// fact = 2 * 3
										// fact = 6 * 4
										// fact = 24 * 5
	}
	
	cout<<"The factorial of "<<num<<" is "<<fact<<endl;
	return 0;
}
