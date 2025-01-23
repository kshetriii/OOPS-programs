#include<iostream>
using namespace std;
class rectangle
{
	int l,b,area;
	public:
	void getdata()
{
		
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;

/* not to ask input and print the result do this */
// l=5;
// b=6;


area= l*b;
cout<<"the area is "<<area;


}
};

int main()

{
rectangle r1;
r1.getdata();

/* yesari void display() vanera na lekhera program ma ani tala cout<< vanera 
   lekhepaar hamile int main() function pxi k result diney ho tyo data store 
   grne variable lekhna prxa   int area; vndai ani mathi pni   public:  vnda
   mathi tyo process run grda declare grna prxa ani jhanjat badi hunxa jata 
   tatai declare grda and ofc run time slow hunxa...*/  
// cout<<"the area is "<<area;

return 0;
}
