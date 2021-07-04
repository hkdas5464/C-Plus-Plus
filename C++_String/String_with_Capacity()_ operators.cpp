//capacity()
//
//This Function return the number of bytes allocated in memory for a string 
//. This is different form the size of a string, where a string might have 
//100 bytes of allocated memory but contain only 100 characters.
#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string str(100,'x');
	str ="word and lines";
	cout<<"string :"<<str.length()<<endl;
	cout<<"memory allocated to string :" <<str.capacity()<<endl;
	
	return 0;
}
