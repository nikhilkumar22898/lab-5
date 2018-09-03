// library
#include <iostream>
using namespace std;
int main(){ 
	//Assigning variables
	char c,a,e,i,o,u;
	cout<< "Type an alphabet:"; cin >>c ;
	//giving the reqiured condition
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')  cout <<"This is a vovel"<<endl;
	//else do this
	else cout <<c<<" is a consanant"<<endl;	
	return 0;
}
