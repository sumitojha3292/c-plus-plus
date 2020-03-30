/* CPP for call by reference(Inline function) 
In this method machine code of called function is copied in the place of function calling.
in this method do not use complex function, loops inside function or very short(3-4) lines of code.
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
}

int sum(int &a, int &b)
{
	return a+b;
}

int main()
{
	int a=10,b=20;
	swap(a,b);
	cout<<"after swapping"<<endl<<"a= "<<a<<" ,b= "<<b<<endl;
	cout<<"SUM= "<<sum(a,b)<<endl;

	
  return 0;
}
