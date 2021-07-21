#include <iostream>

using namespace std;

int findTotalFeet(int n,int arr[]){

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=12){
            sum=sum+(arr[i]/12);
        }
    }
    return sum;

}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<findTotalFeet(n,arr);

    return 0;
}