#include<iostream>
using namespace std;
int main(){
	
	
int n;
cout<<"Enter The Size of Array: ";
cin>>n;
int arr[n];
int sum=0;

for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<<"Your Data is ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

for(int i=0;i<n;i++){
	sum+=arr[i];
}

cout<<" "<<"\n";
cout<<"Sum of Your Array is : "<<sum;

	
	return 0;
}
