#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class actor
{
	string name;
	int rating;
	public:
			void actors(string actor_name,int r)
		{
			name=actor_name;
			rating=r;
		}
		void display()
		{
			if(rating>5)
			{
				cout<<"Name: "<<name<<endl;
				cout<<"Rating: "<<rating<<endl;
			}
		}
};
int main()
{
	
	actors A1(Prabhat,10);
	actors A2(Dhiraj,8);
	actors A3(Anmol,4);
	A1.display();
	A2.display();
	A3.display();
	return 0;
}
