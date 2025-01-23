#include<iostream>
using namespace std;

class employee {
public:
    int eid, salary;
    char name[30];

    void details() {
        cout << "\nEnter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> eid;
        cout << "Enter salary of the employee: ";
        cin >> salary;
    }

    void display(int i) {
        cout << "\nThe Employee name of employee " << i << " :: " << name << endl;
        cout << "The Employee ID of the employee " << i << " :: " << eid << endl;
        cout << "The Salary of the employee " << i << " :: " << salary << endl;
    }
};

class company {
public:
    char cname[30], loc[50];
    employee emp[10];  						// Array to store details of up to 10 employees
    										// new emp variable taken for the class of employee.

    void cdetail() {
        cout << "Enter company name: ";
        cin >> cname;
        cout << "Enter the location of the company: ";
        cin >> loc;

        cout << "\n\nEnter Employee details: " << endl;

        for (int i = 0; i < 2; i++) 			// Loop to input details of 9 employees
		{  
            cout << "\n\nEmployee " << (i + 1) << " :" << endl;
            emp[i].details();                
        }

        cout << "\n\nDisplaying All Employee details: " << endl;

        for (int i = 0; i < 2; i++) 			 // Loop to display details of 9 employees
		{ 
            emp[i].display(i + 1);
        }
    }
};

int main() {
    company c;
    c.cdetail();
    return 0;
}
