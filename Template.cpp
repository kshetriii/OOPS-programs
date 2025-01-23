#include<iostream>
using namespace std;
template <class T>
T getdata (T a,T b)
{
   if (a>b)
   return a;
   else
   return b;
//     T c;
//     c=(a>b)? a:b;
//     return c;
}
int main()
{
    cout<<"The largest integer value is:: "<<getdata(4,6);
    cout<<"\n The largest float value is:: "<<getdata(6.5,9.5);
    cout<<"\n The greatest char value is:: "<<getdata('a','z');

    return 0;
}
