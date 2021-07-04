#include <iostream>
#include <iostream>
using namespace std;

int main(){
	
	string data;
	cin>>data;
	int l=data.size();
	
	for(int i=0;i<l;i++){
		if(data[i]>='A' && data[i]<='Z')
		data[i]=data[i]+32;
	}	
	
	cout<<data;
	
	
	
	
	
	return 0;
}
