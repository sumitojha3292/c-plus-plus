/* CPP to traverse,reverse,changing upper-lower and lower to upper case using a string iterator */ 

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



int main()
{
  string s1="welcome";
  string s2="HELLO";
  string::iterator it;
  string::reverse_iterator rit;
  // traversing through string and changing it to upper case
  for(it=s1.begin();it!=s1.end();it++)
  {
	  *it=*it-32;
  }
  cout<<s1<<endl;

  
  // Reversing a string and changing it to lower case
 for(rit=s2.rbegin();rit!=s2.rend();rit++)
  {
	  *rit=*rit+32;
  }
   cout<<s2<<endl;
  return 0;
}
