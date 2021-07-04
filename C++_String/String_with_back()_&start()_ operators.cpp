//back()__ start C++
//
//the function return a reference to the last character in your string.allocator_type



#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string HelloWorld="gello World?";
	cout<<"Input String"<<HelloWorld<<endl;
HelloWorld::back()='!';
	HelloWorld::front()='H';
	cout<<"Output String :"<<HelloWorld<<endl;
	
	return 0;
}
