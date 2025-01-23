#include<iostream>
using namespace std;
class item
{
	static int count;
	int num,a;
	public:
		void getdata()
		{
			num=a;
			count++;
		}
		static void displaycount()
		{
			cout<<"count:"<<count<<endl;
		}
};
int item::count;
int main()
{
	item obj1,obj2,obj3;
	obj1.getdata();
	obj2.getdata();
	obj3.getdata();
	item::displaycount();
	return 0;
}
