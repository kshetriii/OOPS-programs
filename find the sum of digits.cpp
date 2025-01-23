// find the sum of digits.

#include<iostream>
using namespace std; 

int main() 
{

    int num1, num2, r, sum = 0; 

    
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";

    
    cout << " Input a number: ";
    cin >> num1; 

    num2 = num1;			// num1 is being changed again and again so store in another variable.
   
    while (num1 > 0) 		// 432  now, 43
    {
        r = num1 % 10;  	// r = 432 % 10 == 2 
        num1 = num1 / 10; 	// num1 = 432 / 10 ==43
        sum = sum + r;   	// sum = 0 + 2    now, sum == 2  and num 1 == 43.
    }

    
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;

    return 0; 
}

