#include <iostream>
using namespace std;

int main()
{
    int number, lastdigit, originalNumber, reverseNumber=0;

    cout << "Enter an integer";
    cin >> number;
    originalNumber=number;


    while (number !=0)
    {
        lastdigit = number%10;

        reverseNumber=reverseNumber*10+lastdigit;
        number = number/10;
    }
   

    if(originalNumber == reverseNumber){
        cout<<" Palendrom";
    }else{
        cout<<"Not A Pallendrom";
    }
    

    return 0;
}
