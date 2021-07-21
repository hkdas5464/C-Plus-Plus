#include <iostream>
using namespace std;


int findtheDIstance(int n, int arr[]){
       int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+ abs(arr[i]-arr[i+1]);
    }

    return sum;

}

int main(){


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    
   
   cout<<findtheDIstance(n,arr);
    return 0;
}