/* CPP for call by reference(Inline function) 
1)In this method machine code of called function is copied in the place of function calling.
2)In this method do not use complex function, loops inside function or very short(3-4) lines of code.
3)If function is called by reference it will automatically act as a inline function.
must watch video of abdul bari for this concept
*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Inside swap function, Adress of:- "<<endl<<"a= "<<&a<<endl<<"b= "<<&b<<endl;
}

int sum(int &a, int &b)
{
	cout<<"Inside sum function, Adress of:- "<<endl<<"a= "<<&a<<endl<<"b= "<<&b<<endl;
	return a+b;
}

int main()
{
	int a=10,b=20;
	cout<<endl<<"Inside main function, Adress of:- "<<endl<<"a= "<<&a<<endl<<"b= "<<&b<<endl;
	swap(a,b);
	cout<<endl<<"After swapping"<<endl<<"a= "<<a<<" ,b= "<<b<<endl;
	cout<<"SUM= "<<sum(a,b)<<endl;

  return 0;
  
}
