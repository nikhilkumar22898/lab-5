//library
#include<iostream>

using namespace std;

//call the main function
int main()
	{
	//declaring the variables to check
	char a1;
	
	cout<< "enter the character"<<endl;
	cin >> a1;
	
         for(char w=char(65);w<=char(122);w++)
		{
		if( a1==char('w'))
			{
			cout <<"ITS A CHARACTER  "<<endl;
			}
		else
			{
			cout<<"	ITS NOT A CHARACTER"<<	endl;
			}
		}
	return 0;
}
