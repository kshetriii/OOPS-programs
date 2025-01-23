#include<iostream>
using namespace std;
int main()
{
	int n,i=1,fact=1;
	cout<<"enter a number:";
	cin>>n;
	for(i=1;i<=n;i++)
	fact*=i;
	cout<<"factorial="<<fact<<endl;
	return 0;
}
