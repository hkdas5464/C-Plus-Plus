#include <iostream>
using namespace std;

int calculatetax(int n, int arr[])
{
    int tax=0;
    for(int i=0;i<n;i++)
    if(arr[i]>=1000)
    {
        tax=tax+.1*arr[i];
    }
    return tax;
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
    cout << calculatetax(n, arr);

    return 0;
}