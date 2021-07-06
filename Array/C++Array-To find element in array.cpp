#include <iostream>
using namespace std;
int main(){
	
	int a ,b;
	cin>>a>>b;
	int arr[a][b];
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	
	int x;
	cin>>x;
	bool flag=false;
	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i][j]==x){
				cout<<i<<" "<<j<<endl;
				flag =true;
			}
		}
		cout<<"\n";
	}
	
	if(flag){
		cout<<"element found"<<endl;
		
	}else{
		cout<<"Enement is not found"<<endl;
	}
	
	
	return 0;
}
