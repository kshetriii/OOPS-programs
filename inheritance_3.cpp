#include<iostream>
using namespace std;

class school
{
  protected:
  int roll,id;
    public:
  void getdata()
  {
    cout<<"Enter the roll no:: "<<endl;
    cin>>roll;

    cout<<"Enter the id:: "<<endl;
    cin>>id;
  } 

  void displaydata()
  {
    cout<<"The roll is:: "<<roll<<" and "<<"The id is:: "<<id<<endl;
  }
};

class student:public school
{
    protected:
    int subject;
    int passed;
    public:

    void getstudentdata()
    {
    getdata();
    cout<<"Enter the total subject he studies:: "<<endl;
    cin>>subject;
    cout<<"Enter the total subject he passed:: "<<endl;
    cin>>passed;
    }

    void display()
    {
      displaydata();
      cout<<"The total subject he studied:: "<<subject<<endl;
      cout<<"The total subject he passed:: "<<passed<<endl;
    }
};

int main()
{
  student s2;

  s2.getstudentdata();
  s2.display();

  return 0;
}