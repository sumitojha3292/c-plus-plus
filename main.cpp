/* CPP  using built in more string class API */ 

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
 string str1;
 cout<<"Enter the string"<<endl; 
 getline(cin,str1);  // enter sumit
 cout<<"String is "<<endl<<str1<<endl;
 
 // Append
 str1.append(" Ojha"); // add content to str1
 cout<<"After append string is "<<endl<<str1<<endl;
 // Insert
 str1.insert(0,"Hello "); // insert content from mentioned index
 cout<<"After insert string is "<<endl<<str1<<endl;
 
 // Replace
 str1.replace(6,5,"NEHA"); // replace the 5 character from 6th index 
 cout<<"After Replace string is"<<endl<<str1<<endl;
 
 // swap
 string str2="Hello User";
 str1.swap(str2);
 cout<<"First string is"<<endl<<str1<<endl;
 cout<<"Second string is"<<endl<<str2<<endl;
  return 0;
}
