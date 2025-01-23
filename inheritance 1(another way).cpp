#include<iostream>
using namespace std;

class student
{
private:
	string name;
	int roll;
	
	public:
		void getinfo(string x , int y)
		{
			name = x;
			roll = y;
			
			cout<<"Name of the student is:: "<<name<<endl;
			cout<<"The roll no of the student is:: "<<roll<<endl;
		}
	
};

class marks
{
//private:						// i kept here private hence tala access payena total nikalda
protected:										
	float cpp,mp,ds;	
	public:
		void getmarks(float c,float m,float d)
		{
			cpp = c;
			mp = m;
			ds = d;
			cout<<"\nThe marks of cpp , mp and ds are:: "<<cpp<<"\t"<<mp<<"\t"<<ds<<"\t"<<endl;
		}
};

class result : public student , public marks
{
	private:
		float total;
		double percentage;
		
		public:
			void displayResult()
			{
				total = cpp + mp + ds;
				cout<<"The total is:: "<<total<<endl;
				
				percentage = (total / 180)*100;
				cout<<"The percentage is:: "<<percentage<<endl;
			}	
};


int main()
{

result r1;
r1.getinfo("Prabhat",45);
r1.getmarks(58,55,50);
r1.displayResult();

cout<<"--------------------------------------------------------------------------------------------------------"<<endl;

result r2;
r2.getinfo("Prasuna",46);
r2.getmarks(58,59,60);
r2.displayResult();

return 0;
}
