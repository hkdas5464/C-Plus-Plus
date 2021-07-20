#include <iostream>
#include <string>
using namespace std;
int main()
{

    string data;
    getline(cin ,data);

    for (int i = 0; i < data.size(); i++)
    {
        if ((data[i] >= 'A' && data[i] <= 'Z' )||(data[i]>='a' && data[i]<='z'))
            data[i] = data[i] + 1;
    } 
    cout << data;

    return 0;
}