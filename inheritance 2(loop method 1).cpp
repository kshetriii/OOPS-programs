#include<iostream>
using namespace std;
class employee
{
    public:
int eid,salary;
int i;
char name[30];
void details()
{
    cout<<"\nEnter employee name: "<<endl;
    cin>>name;
    cout<<"Enter employee ID :"<<endl;
    cin>>eid;
    cout<<"Enter salary of the employee "<<endl;
    cin>>salary;
}

void display()
{
	 cout<<"\nThe Employee name of employee "<<i<<":: "<<name<<endl;
	 cout<<"The Employee ID of the employee "<<i<<":: "<<eid<<endl;
	 cout<<"The Salary of the employee "<<i<<":: "<<salary<<endl;
}


};
class company:public employee
{
    public:
    char cname[30],loc[50];
    void cdetail()
    {
        cout<<"Enter company name "<<endl;
        cin>>cname;
        cout<<"Enter the location of company "<<endl;
        cin>>loc;

        cout<<"\n\nEmployee details: "<<endl;
        for (i=1;i<10;i++)
        {
            cout<<"\n\nEmployee"<<i<<":"<<endl;
            details();				//employeee::details();

		
			display();				// yo yeha lekhepaar input grne bittikai show grxa so last ma grna lai yeha na lekhne
      
           }}
};
int main()
{
    company c;
    c.cdetail();
    
//    cout<<"----------------------------------------"<<endl;
    
//    c.display();
    return 0;
}
