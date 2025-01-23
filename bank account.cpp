#include<iostream>
using namespace std;
class account
{
	int account_no;
	char accountholdername[30];
	float amount;
	float balance;
	float minimumbalance;
	public:
		void getdata()
		{
			cout<<"Enter the a/c no , a/c holder name and balance"<<endl;
			cin>>account_no>>accountholdername>>balance;
		}
		void display()
		{
			cout<<"A/C No:"<<account_no<<endl<<"Account Holder Name:"<<accountholdername<<endl<<"Balance:"<<balance<<endl;
		}
		void deposit(double amount)
		{
			balance+=amount;
			cout<<"Deposit successful,current balance:"<<balance<<endl;
		}
		void withdraw(double amount)
		{
			balance-=amount;
			if(amount<=balance)
			{
				cout<<"Withdral successful,current balance:"<<balance<<endl;
			}
			else
			{
			    cout<<"Insufficient balance"<<endl;
			}
		}
};
int main()
{
	int deposit_amt,withdrawl_amt;
	account a;
	a.getdata();
	a.display();
	deposit_amt=150;
	cout<<"Deposit amount:"<<deposit_amt<<endl;
	a.deposit(deposit_amt);
	withdrawl_amt=1200;
	cout<<"Withdrawl amount:"<<withdrawl_amt<<endl;
	a.withdraw(withdrawl_amt);
	return 0;
}

