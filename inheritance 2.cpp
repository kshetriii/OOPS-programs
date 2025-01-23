#include<iostream>
using namespace std;

class employee
{
	private:
		char E_name[50];
		int Eid;
		float salary;
		
		public:
			void EmployeeDetails()
			{
				cout<<"\n\nEnter the name of the respective employee:: "<<endl;
				cin>>E_name;
				
				cout<<"Enter the Eid of the employee:: "<<endl;
				cin>>Eid;
				
				cout<<"Enter the salary of the employee:: "<<endl;
				cin>>salary;
				
			}
			
			void displaydata1()
			{
				cout<<"\nThe name of the respective employee:: "<<E_name<<endl;
				cout<<"The Eid of the employee:: "<<Eid<<endl;
				cout<<"The salary of the employee:: "<<salary<<endl;
			}
};

class company : public employee
{
	private:
		char C_name[200];
		char location[150];
		
	public:
		void companydetails()
		{
				
			cout<<"Enter the name of the company:: "<<endl;
			cin>>C_name;
			
			cout<<"Enter the location of the company:: "<<endl;
			cin>>location;
			
		}
};

int main()
{
	company c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	
	c1.companydetails();
	
cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	c1.EmployeeDetails();
	c2.EmployeeDetails();
//	c3.EmployeeDetails();
//	c4.EmployeeDetails();
//	c5.EmployeeDetails();
//	c6.EmployeeDetails();
//	c7.EmployeeDetails();
//	c8.EmployeeDetails();
//	c9.EmployeeDetails();
//	c10.EmployeeDetails();								
	
cout<<"----------------------------------------------"<<endl;
cout<<"----------------------------------------------"<<endl;
	
	c1.displaydata1();
	c2.displaydata1();
//	c3.displaydata1();
//	c4.displaydata1();
//	c5.displaydata1();
//	c6.displaydata1();
//	c7.displaydata1();
//	c8.displaydata1();
//	c9.displaydata1();
//	c10.displaydata1();
	
	return 0;
}
