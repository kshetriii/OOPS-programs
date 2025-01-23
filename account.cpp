#include<iostream>
using namespace std;
class account
{
//	public:
	int acc_no;
	int b;
	static int min_b;
	public:
		void getdata()
		{
			cout<<"enter A/C number and balance:"<<endl;
			cin>>acc_no>>b;
		}
		void display()
		{
			cout<<"Account no:"<<acc_no<<endl<<"Balance:"<<b<<endl;
		}
		static void getminbalance()
		{
			cout<<"enter minimun balance:"<<endl;
			cin>>min_b;
		}
		static void displayminbalance()
		{
			cout<<"Minimum balance:"<<min_b<<endl;
		}
};
using namespace std;
int account :: min_b=0;
const int size=5;
int main()
{
  account a[size];
  for(int i=0;i<size;i++)
  {
  	cout<<"enter the details of account"<<i+1<<endl;
  	a[i].getdata();
  }
  for(int i=0;i<size;i++)
  {
  	cout<<"\n account"<<i+1<<"\n";
  	a[i].display();
  	a[i].displayminbalance();
  }
  return 0;
}

