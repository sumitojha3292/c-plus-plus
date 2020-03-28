/* CPP for taking string input from user using built in string class API */ 

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
 string str1;
 cout<<"Enter the string"<<endl; 
 getline(cin,str1);
 cout<<str1<<endl;
 cout<<"Length= "<<str1.length()<<endl;  // for calculating string length
 cout<<"Capacity= "<<str1.capacity()<<endl; // for calculating string length
 str1.resize(50);                          // it will make sure that new size will be >=50
 cout<<"New capacity= "<<str1.capacity()<<endl; 
 cout<<"string maxm size= "<<str1.max_size()<<endl; // for checking maxm string supported size
// str1.clear(); // Clear the contents of string
 if(str1.empty())
 {
	 cout<<"Empty string"<<endl;
	
 }
 else
 {
	  cout<<"string is "<<str1<<endl;
 }
 
  return 0;
}
