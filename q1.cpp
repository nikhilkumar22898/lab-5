// library
#include <iostream>
using namespace std;
int main(){ 
	//Assigning variables
	float a1,a2;
	cout<< "Let the numbers be "; cin >>a1 ;
	cout<< " and " ;
	//reading the value
	cin >>a2;
	
	//condition
	
	if(a1 > a2){
		cout <<"The number "<<a1<<"is greater than"<<a2<<endl;

	}
	else{
		cout <<"The number "<<a1<<" is less than "<<a2<<endl;

	}
	return 0;
}
