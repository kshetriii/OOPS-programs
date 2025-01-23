#include<iostream>
using namespace std;

class student
{
	private:
		char name[20];
		int roll;
	public:	
			void studentData()
		{
			cout<<"\nEnter the name of student "<<endl;
			cin>>name;
			
			cout<<"\nEnter the roll no. "<<endl;
			cin>>roll;
		}
};

class mark 
{
	public:
		float stats,oop,maths,mp,ds;
		void points()
		{
			cout<<"\nEnter the marks of stats,oop,maths,mp,ds = "<<endl;
			cin>>stats>>oop>>maths>>mp>>ds;
		}
};

class result : public student , public mark
{
	public:
		double total , percentage ;
		
		void sheet()					// don't use the class name and the method name the same.
		{
			studentData();
			points();
			
			
				
			total = stats + oop + maths + mp + ds;
			cout<<"The total marks is = "<<total<<endl;
			
			percentage = (total/300)*100;
			cout<<"The percentage is = "<<percentage<<endl;
		}
};

int main()
{
	result r1,r2;
//	r1.studentData();				
//	r1.points();
//	r1.student::studentData();				// object.class name :: function name
//	r2.mark::points();
	r1.result::sheet();	
	r2.sheet();	
	
	return 0;
}
