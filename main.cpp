/*CPP for using template . 
1-Templates are functions that serve as a pattern for creating other similar functions.
2-The basic idea behind function templates is to create a function without having to specify
  the exact type of the variables.
3-To create a template type parameter, use either the keyword typename or class.There is no 
  difference between the two keywords in this context, so which you use is up to you.Note that
  if you use the class keyword, the type passed in does not actually have to be a class 
  (it can be a fundamental variable, pointer, or anything else that matches).
4-Template function uses multiple template type parameter, they can be separated by commas.
5- Whenever a new function is starts it should be defined with template. template declaration effect 
   is till the immidiate function,class body ends.
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

template<class T>
class Test
{
  public:
  T maxim(T x,T y)
  {
	  return x>y?x:y;
  }
  
  T minm(T x,T y)
  {
	  return x<y?x:y;
  }
  
  T add(T x,T y)
  {
	  return x+y;
  }
  
  T substract(T x,T y)
  {
	  return x-y;
  }
};





int main()
{
	
   Test<int> t;
   cout<<"maximum= "<<t.maxim(10,20)<<endl;
   cout<<"sum= "<<t.add(5,6)<<endl;


    return 0;
}
