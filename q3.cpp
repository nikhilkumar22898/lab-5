//q3> write a c++ program to check whether a number is negative,positive or zero.
// library
#include<iostream>
using namespace std;
//calling the main function
int main()
	{
	float a1;
	//asking the user to enter the number
	cout<<"enter the number that you have to check"<<endl;
	cin >>a1;
	//using the if command and else command,check its type
	if(a1>0)
		{
		cout<<"the number is positive "<<endl;
		}
        else if (a1<0)
		{
		cout<<"the number is negative "<<endl;
		}
	else    {
		cout<<"the number is zero "<< endl;
		}


	 return 0;
	}

