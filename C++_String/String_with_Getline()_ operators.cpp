//Getline()


//
//This function is used to input whole linear or sentences into string.allocator_typeYou can definitely
//use the input stream  function "cin" to input string but it will
//only allow you to input one world while the getline function
//reads till a new is found.
#include <iostream>
#include <string>

using namespace std;
int main(){
	string name;
  getline(cin, name);
  cout<<"Your Full Name is:"<<name<<endl;
  
  
  return 0;
}
