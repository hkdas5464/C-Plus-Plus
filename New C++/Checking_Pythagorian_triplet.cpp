#include <iostream>
using namespace std;

int sum(int a,int b , int c)
{
 

 int x= max(a, max(b,c));

 int y,z;
 if(x==a)
 {
     y=b;
     z=c;
 }else if(x==b)
 {
     y=a;
     z=c;
 } else if(x==c) {
     y=b;
     z=a;
 }

 if(x*x ==y*y+z*z){
     return true;
 }else {
     return false;
 }

 return x;
    
}

int main()
{

    int a,b,c;
    cin >> a>>b>>c;


    if(sum(a,b,c))
    {
        cout<<"Pythagoures Triplet";
    }else{
        cout<<"NOOT";
    }

    return 0;
}