 // a program will continue till you press the the number 545.
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int num;
 	cout<<"You will have to put the correct number to end the program.."<<endl;
 	cout<<"First digit is number of centuries by Rohit Sharma in world cup 2019 and last two digits are his jersey number.."<<endl;
 	cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
 	cout<<"\nEnter the number = ";
 	cin>>num;
 	
 	while(num!=545)	/* jaba samma equal hudaina gari raakh vaneko equal equal
	 				   sign diyesi equal vayesi banda gar vanne bujhdaina.    */
	 {
	 	cout<<"\nThat's incorrect please enter the correct one.."<<endl;
 	cout<<"What's the correct number?--->  ";
	 cin>>num;	
	 }
	 
 	 if(num == 545){
 	 	cout<<"\nYess that's the correct number."<<endl;
	  }
 	return 0;
 	
 }
