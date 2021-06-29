#include<iostream>
using namespace std;
int main(){
	
	
	int data;
	cin>>data;
	int fact=1;
	if(data<0){
		cout<<"Error";
	}else {
		for(int i=1;i<=data;i++){
		fact*=i;
	}
	cout<<fact;
	}
	
	
	
	return 0;
}
