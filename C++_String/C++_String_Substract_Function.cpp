#include <iostream>
#include<string>
using namespace std;
int main(){
	
	string a= "hello_world";
	int length=a.size();
	
	cout<<length<<endl;
	
for(int i=10;i>=0;i--){
	string b=a.substr(0, i);
	cout<<b<<endl;
}
}
