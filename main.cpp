/* CPP for using constructor in parent and child class.
every time default constructor in parent class is executed first whenever any constructor is called in child class.
but you can direct which class should be executed first in the following methods. 
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

class parent
{
	private:
	int p;
	public:
	/***Default constructor******/
	parent()
	{
		cout<<"Default parent class"<<endl;
	}
	
	/***Parameterized constructor******/
	
	parent(int p)
	{
		cout<<"Param parent class "<<p<<endl;
	}
	
	
};


class child: public parent
{
	private:
	int c;
	public:
	/***Default constructor******/
	child()
	{
		cout<<"Default child class"<<endl;
	}
	
	/***Parameterized constructor******/
	
	child(int c)
	{
		cout<<"Param child class "<<c<<endl;
	}
	
	child(int p,int c):parent(p) // method to execute parameterized parent class
	{
		cout<<"Parameterized child class "<<c<<endl;
	}
	
	
};



int main()
{
  cout<<"Object-C1:"<<endl;	
  child C1;  // default parent class constructor is executed first then default child class will be executed.
  cout<<"Object-C2:"<<endl;
  child C2(10); // default parent class constructor is executed first then child parameterized class will be executed.
  cout<<"Object-C3:"<<endl;
  child C3(10,20); // parameterized parent class constructor is executed first then child parameterized class will be executed.
  return 0;
  
}



