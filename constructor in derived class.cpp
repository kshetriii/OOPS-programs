#include<iostream>
using namespace std;

class A
{
    protected:
    int length;
    public:
    A(int l)
    {
        length = l;
    }
};
class B: public A
{
int breadth;
public:
B(int l, int b): A(l)
{
    breadth = b;
}
void showdata()
{
    cout<<"Length = "<<length<<" Breadth = "<<breadth<<endl;
}
};

int main()
{
B b(4,5);
b.showdata();

return 0;
}