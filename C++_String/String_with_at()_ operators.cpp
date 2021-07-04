//Accessing Element of String 
//
//Accessing Element in an string using at() function
//at() function are similar as the [] operatot and additionally check wether tge
//given index is out of range tor not and throws an exception if out of range.
//



#include <iostream>
#include <string>
using namespace std;
int main(){
	
	
	string a= "hello World";
	cout<<a.at(6);
	
	
	
	return 0;
}
