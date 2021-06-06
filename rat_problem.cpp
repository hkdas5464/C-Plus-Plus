#include <iostream>
using namespace std;
//
//r= number of rates;
//unit = amount of food each rat consume



int NumberofHouses(int r, int unit, int arr[],int n){
	
		
int total= r*unit;
int sum=0;
int place;
for(int i=0;i<=n;i++){
	if(sum>=total){
		break;
		
	}else{
		sum+=arr[i];
		place=i+1;
	}
}

	std::cout<<place;
	
}


int main(){
	int n,r,unit;

cin>>n;
cin>>r;
cin>>unit;

//int arr[8]={2,8,3,5,7,4,1,2};
int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
NumberofHouses(r,unit,arr,n);
	
	return 0;
}
