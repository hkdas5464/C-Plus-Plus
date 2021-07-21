#include <iostream>

using namespace std;

int findmaxandmindifferenceinanarray(int n, int arr[])
{
    int max=-1000000000;int min=1000000000;

    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min = arr[i];
    }
    return max-min;
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
    cout << findmaxandmindifferenceinanarray(n, arr);
    return 0;
}