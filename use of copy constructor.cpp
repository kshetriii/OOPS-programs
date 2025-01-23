#include<iostream>
using namespace std;
class item
{
	private:
	int code;
	int price;
	public:
	item()
	{
		code = 40;
		price = 500;
	}
	
	item(item& x)
	{
	code = x.code;
	price = x.price;	
	}
	
	void display()
	{
	cout<<"code is "<<code<<" and price is "<<price<<endl;
	}
};
int main()
{
item i1;
item i2 (i1);
i1.display();
i2.display();
return 0;
}

