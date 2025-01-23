#include<iostream>
using namespace std;
class interest
{
	private:
	int principal, rate , time;
	float si;
	float amount;
	public:
		interest( int p, int t, int r =10)
		{
		principal = p;
		rate = r;
		time = t;	
		}
		
	   void	cal()
	   {
	   	cout<<"principal = "<<principal<<endl;
	   	cout<<"rate = "<<rate<<endl;
	   	cout<<"time = "<<time<<endl;
	   	
	   	si=((principal * time * rate)/100);
	   	cout<<"the interest is "<<si<<endl;
	   	
	   	amount = principal + si;
	   	cout<< "the sum is "<<amount<<endl;
	   }	   
};
int main()
{
interest i1(2000,3);
interest i2(2000,3,20);
i1.cal();
i2.cal();
return 0;
}

