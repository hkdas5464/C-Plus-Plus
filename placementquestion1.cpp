#include <iostream>
using namespace std;



int helper(int arr[],int arr2[],int n){
	

	int s=0;
	int e= n-1;
	int sum[n];
	int add=0;
	while(s<e)
	{
		swap(arr2[s],arr2[e]);
		s++;
		e--;
	}
	
	for(int i=0;i<n;i++){
		sum[i]=arr[i]*arr2[i];
	}
	

	
	for(int i=0;i<n;i++){
	add+=sum[i];
	}

return add;

}



int main(){
	

int n;
cin>>n;
int arr[n];
int arr2[n];
cout<<"Enter 1st array element"<<endl;

for(int i =0;i<n ;i++){
	cin>>arr[i];
}
cout<<"Enter 2nd array element"<<endl;

for(int i =0;i<n ;i++){
	cin>>arr2[i];
}


	
	cout<<helper(arr,arr2,n);



	
	

	return 0;
}
