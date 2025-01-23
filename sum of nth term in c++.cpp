#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n;
	int x,sum=0;
	cout<<"x-x^2+x^3-x^4+.....-x^n"<<endl;
	cout<<"enter the value of x and n:"<<endl;
	cin>>x>>n;
	for(i=1;i<=n;i++)
	{
		sum+=pow(-1,i)*pow(x,i);
	}
	cout<<"sum is="<<sum<<endl;
	return 0;
}
