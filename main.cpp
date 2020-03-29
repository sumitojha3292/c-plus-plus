/* CPP for function Template
 A function with same name and same body but different agrgument list can
 be used as function template.
*/ 

#include <stdio.h>
#include <iostream>

using namespace std;
template<class T>


T maxim(T x, T y)
{
	return x>y?x:y;
}

int main()
{
  cout<<"Maximum of two integers value:- "<<maxim(10,20)<<endl;
  cout<<"Maximum of two float value:- "<<maxim(10.5f,5.5f)<<endl;
  cout<<"Maximum of two double value:- "<<maxim(7.5,7.2)<<endl;
  //cout<<"Maximum of one float and one double value:- "<<maxim(2.3f,5.5)<<endl;  // if you uncomment this, it will give an error 
                                                                                  //because no function is defined with float and double argument list
	
  return 0;
}
