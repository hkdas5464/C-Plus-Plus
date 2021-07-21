#include <iostream>
using namespace std;

int findOddeven(int n ,int arr[])
{

    int odd=0;
    int even =0;
    for(int i=0 ;i<n;i++){
        if(arr[i]%2==0)
        even=even+arr[i];
        else
        odd=odd+arr[i];
    }
    return odd-even;
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

    cout<<findOddeven(n, arr);

    return 0;
}