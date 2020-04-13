/*CPP for c++11 features.
1- Auto keyword is used to declare data type and return type automatically.
2- decltype(x) y is used to declare y as same type as of x. 
3- Final keywords in class declaration restricts inheritance. final keyword is used only in virtual function
   to avoid function overriding in child class. 
*/             

#include <stdio.h>
#include <iostream>
#include <fstream>  // Including for file input output stream
using namespace std;

class parent //final     // if uncomment it will generate error bcz child class is derived from parent class.
{
	public:
	//virtual void show() final  // if uncomment, it will generate error bcz function can't be override from\
                                	virtual function with final keyword. 
	void show()
	{
		cout<<"parent class"<<endl;
	}
};

class child:parent
{
	public:
	void show()
	{
		cout<<"child class"<<endl;
	}
};

int main()
{ 
  auto x=5.2; // x will automatically become double type
  auto sum=0.0;
  decltype(x) y=2.3;  // y is of type x
  sum=x+y;
  cout<<"sum= "<<sum<<endl;
  child c;
  c.show();
  
  return 0;
}
