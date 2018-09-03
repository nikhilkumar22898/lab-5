// library
#include<iostream>
using namespace std;
int main()
	{//declaring the variable and asking the user for number limit
	int n;
	cout<<"enter the starting point"<< endl;
	cin >>n;
	int i=1;//declaring the lower limit
        while(i<=n)//looping so as to get the range of the required numbers
		{
		cout <<"  "<<n<<endl;//displaying the range

		n--;
		}
	return 5;
}
