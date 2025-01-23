#include<iostream>
using namespace std;

class A
{
    protected:
    int length;
    int weight;

    public:
    A(int l, int w)
    {
        length = l;
        weight = w;
    }
};
class B
{
    protected:
    int breadth;
    public:
    B(int b)
    {
        breadth = b;
    }
};

class C: public A,public B
{
    int height;
    public:
    C(int l,int w, int b, int h): A(l,w),B(b)
    {
        height = h;
    }
    void showdata()
    {
        
        cout<<"lenght is:: "<<length<<endl;
        cout<<"weight is:: "<<weight<<endl;
        cout<<"breadth is:: "<<breadth<<endl;
        cout<<"height is:: "<<height<<endl;
    }
};

int main()
{
C c(4,5,6,7);
c.showdata();

return 0;
}