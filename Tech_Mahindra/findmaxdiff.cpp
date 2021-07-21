#include <iostream>
using namespace std;


int find_max_diff(int n, int arr[]){

    int max=0;
    int data[n-1];
    int diff;

    for(int i=0;i<n-1;i++){
        diff = arr[i]-arr[i+1];
        if(diff>max){
            max=diff;
        }
    }

    // for(int i=0;i<n-1;i++)
    // {
    //     if(data[i]>max){
    //         max=data[i];
    //     }
    // }
    return max;

}

int main(){

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
 cout<<find_max_diff(n, arr);

    return 0;
}