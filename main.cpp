/* CPP for using Inline function inside Recursion and stack overflow*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

void func(int &a)  // this will act like a inline function
{
	long x=5;
	float y=15.5;
	double z=25;
	if(a)
	{
		cout<<a<<" "<<endl;
		func(++a);
	}
}

int main()
{
 int a=1;
 func(a);

  return 0;
  
}
