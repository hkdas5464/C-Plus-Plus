#include<iostream>
using namespace std;
int main(){
	
	char data;
	
	
	cin>>data;
	bool vowel=false;
	if((data == 'a' ) || (data =='e' ) || (data == 'i' )|| (data =='o') || (data =='u' )|| (data =='A') || (data =='E') || (data =='I') || (data =='O') || (data =='U')){
		cout<<"Vowel";
	}else{
		cout<<"Cosonent";
	}


	
	return 0;
}
