#include<iostream>
using namespace std;


char checkAlphabate(int data){
		if((data>'A')&&(data<'Z') ||(data>'a')&&(data<'z')){
		cout<<"Alphabate";
	}else{
		cout<<"Not an Alphabate";
	}
	
}

int main(){
	
	
	char data;
	cin>>data;
	
cout<<checkAlphabate(data);
	
	return 0;
}
