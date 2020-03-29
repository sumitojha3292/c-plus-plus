/* CPP for function overloading
 A function with same name can be redifened but its argument sould be different.
 If a function with same name and argument list but different return type is not 
 a function overloading.
*/ 

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int add(int a,int b)
{
	return(a+b);
}

int add(int a, int b, int c)
{
	return(a+b+c);
}

float add(float a, float b)
{
	return(a+b);
}

int main()
{
  int sum=0;	
  sum=add(10,20);
  cout<<"sum_1= "<<sum<<endl;
  sum=add(10,20,30);  
  cout<<"sum_2= "<<sum<<endl;
  sum=add(10.5f,20.5f);
  cout<<"sum_3= "<<sum<<endl;
	
  return 0;
}
