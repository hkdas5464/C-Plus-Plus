#include<iostream>
using namespace std;
int main(){
	
	int data;
	cin>>data;
	
	int sum=0;
	while(data!=0){
		data=data/10;
		sum=sum+1;
	}
	cout<<sum;
	
	
	return 0;
}
