#include <iostream>
#include <iostream>
using namespace std;

int main(){
	
	string data;
	cin>>data;
	int l=data.size();
	
	for(int i=0;i<l;i++){
		if(data[i]>='a' && data[i]<='z')
		data[i]=data[i]-32;
	}	
	
	cout<<data;
	
	
	
	
	
	return 0;
}
