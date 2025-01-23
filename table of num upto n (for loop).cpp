
								// table of x upto n.

#include<iostream>
using namespace std;

int main()
{
	int x,n;
	cout<<"The table of the inputed number of your choice"<<endl;

	cout<<"\n Table of ";
	cin>>x;
	
	cout<<"\n Table upto ";
	cin>>n;
	
	for(int i = 1 ; i <= n ; i++ /*harek pali loop chalda i ko value 1 ley increase grna vaneko*/ )	
									/* i vaneko 0 xa ani condition k xa vnda i less than or equal 
									to n nahuda samma loop chala ani harek paali i ko value 1
									ley badhxaa. */
	{
		cout<<"\n"<< x <<" * "<<i<< " = "<<x*i<<endl;
	}
	return 0;
}
