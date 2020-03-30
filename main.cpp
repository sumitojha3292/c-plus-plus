/* CPP for Return the address and reference*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

// Return by address

int * func(int size)
{
	int *p= new int[size];
	cout<<"Adress of p= "<<p<<endl;
	for(int i=0;i<size;i++)
	{
		p[i]=i+1;
		cout<<p[i]<<endl;
	}
	return p;
}

// return by reference

int & fun(int &a)
{
	return a; // variable a is the reference of x so it is returning the reference of a which is x itself 
}

int main()
{
  int x;
  int *q;
  fun(x)=5;
  q=func(x);
  cout<<"Adress of q= "<<q<<endl; 


  return 0;
  
}
