#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str(100, 'x');
    str = "words and lines";
 
    cout << "string: " << str << endl;
    cout << "length of string: " << str.length() << endl;
    cout << "capacity of string before shrinking: " << str.capacity() << endl;
 
    /* shrink string to fit its length */
    str.shrink_to_fit();
    cout << "capacity of string after shrinking: " << str.capacity() << endl;
 
    return 0;
}
