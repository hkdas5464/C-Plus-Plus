//pop_back()__string C++
//
//This function is used to pop or remove the last character in string.

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string name;
    cout << "Enter you full name: " ;
    getline(cin, name);
 
    /* delete last character */
    name.pop_back();
 
    cout << "Your full name is: " << name << endl;
    return 0;
}
