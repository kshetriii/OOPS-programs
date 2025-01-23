#include<iostream>
using namespace std;
class B;
class A
{
    int a=10;
    public:
    void getdata()              // we can ignore this function.
    {
        cout<<"a= "<<a;
    }
    friend void add (A,B);
};

class B
{
    int b=20;
    public:
    void getdata()
    {
        cout<<"b= "<<b;
    }
    friend void add (A,B);
};

void add (A r1,B r2)
{
    int c;
    c=r1.a+r2.b;                        // i think i didn't use different type of reference in it.
    cout<<"The sum of a and b= "<<c;
}
int main()
{
A obj1;
B obj2;
add(obj1, obj2);
return 0;
}