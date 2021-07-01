
//The following example illustrates two non-generic (type-sensitive) functions for adding two numbers, x and y:


//#include<iostream>
//using namespace std;
//
//int add(int x, int y)
//{
//	return (x+y);
//}
//
//double add( double x , double y)
//{
//return(x+y);	
//}
//
//
//int main(){
//	int temp1;
//	double temp2;
//	
//	temp1=add(4,5);
//	temp2=add(4.5,5.5);
//	 cout<<temp1<<endl;
//	 cout<<temp2<<endl;
//	 
//	 return 0;
//}

//Two functions that do exactly the same thing, but cannot be defined as a single function because they use different data types.


//To start a template, you must provide the following declaration:
//
//template<class Type>
//// or
//template<typename Type>

#include <iostream>
using namespace std;



	
	template<class Type>
	Type add(Type x, Type y){
		return (x+y);
		
}
	
	

int main(){
	
	int data1= add<int>(2,5);
	int data2= add<double>(2.5,2.5);
	
	cout<<"Int Template :"<<data1<<endl;
	cout<<"Double Tempalte :"<<data2<<endl;

	
	
	return 0;
}
































