#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main(){
	
//string s= "fakjsdfhlak";
//transform(s.begin(),s.end(), s.begin(), :: toupper );
//cout<<s<<endl;


string s="onlinestudy";
for(int i=0; i<s.size();i++){
	if(s[i]>='a' && s[i]<='y')
	{
		s[i]=97-s[i]+122;
	}
}

cout<<s;



	return 0;
}
