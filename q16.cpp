//library
#include<iostream>
using namespace std;
int main()
	{
		//declaring variabls for side and asking the user to enter the three sides
        float l1;
	float l2;
	float l3;
	cout<<"enter the three sides"<< endl;
	cin >> l1;
	cin >>l2;
	cin >>l3;
	//checking the type of the triangle and displaying its type
	if(l1==l1 &&l2==l3)
		{
		cout<<"its equilateral traingle"<<endl;
                }
	else if(l1==l2 && !(l2==l3) && !(l1==l3))
		{
		cout<<"its isosceles traingle"<<endl;
		}
	else
		{
		cout<<"its scalene traingle"<<endl;
		}
	return 9;
}
