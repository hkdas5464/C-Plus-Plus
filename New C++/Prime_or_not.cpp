#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;

int flag=0;

for(int i=2;i<n/2;i++){
   if(n%i==0)
       flag=1;   
}

if(flag){
    cout<<"Not A Prime Number";
}else{
    cout<<"Is A Prime NUMBER";
}


    return 0;
}
