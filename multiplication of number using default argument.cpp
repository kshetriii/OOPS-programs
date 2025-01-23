#include<iostream>
using namespace std;

int mul (int a, int b=1, int c=1, int d=1, int e=1)
{
	return (a*b*c*d*e);
}

int main()
{
int r1,r2,r3,r4,r5;
r1 = mul (18);
r2 = mul (3,50);
r3 = mul (4,21,6);
r4 = mul (5,3,7,10);
r5 = mul (12,1,6,8,4);

cout<<r1<<endl<<r2<<endl<<r3<<endl<<r4<<endl<<r5<<endl;
return 0;
}

