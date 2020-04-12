/*CPP for Manupulators.
1- Manipulators are helping functions that can modify the input/output stream. some examples are:-
   hex,dec,oct,fixed,scientific etc.
2- For more information go to url:- https://www.geeksforgeeks.org/manipulators-in-c-with-examples/
*/             

#include <stdio.h>
#include <iostream>
#include <fstream>  // Including for file input output stream
using namespace std;



int main()
{ 
  cout<<hex<<60<<endl; 
  cout<<dec<<0x3c<<endl; 
  cout<<dec<<0b010101<<endl;
  
  cout<<fixed<<12.195<<endl;        // used for showing fixed floating value
  cout<<scientific<<12.195<<endl;  // scientific value in exponent and mantisa  
  


    return 0;
}
