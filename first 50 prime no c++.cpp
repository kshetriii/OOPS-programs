#include<iostream>
using namespace std;
int main()
{
	int count=0,n=2;
	while(count<50)
	{
		bool isprime=true;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{isprime=false;
			break;
			}
		}
		if(isprime)
		{
			cout<<n<<""<<"\t";
			count++;
		}
		n++;
	}
	return 0;
}
