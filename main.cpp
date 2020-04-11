/*CPP for using virtual Destructor in a parent and child class.
1- Destructor is a function which is called automatically when an object is destroyed.
2- When you create an object in a heap then only constructor is called. for calling a destructor 
   object should be deleted using delete operator.
3- Unlike constructor, destructor of child class is called first than parent class.so destructor
   is called from bottom to top.   
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class parent
{
	public:
    parent()
	{
		cout<<"parent-constructor"<<endl;
	}
	
	virtual ~parent()
	{
		cout<<"parent-destructor"<<endl;
	}

};

class child: public parent
{
	public:
    child()
	{
		cout<<"child-constructor"<<endl;
	}
	
	~child()
	{
		cout<<"child-destructor"<<endl;
	}

};

int main()
{  
   parent *ptr=new child();// constructor is called from top to bottom that is from parent class to child class.
   delete ptr; // if virtual destructor is not used then only parent class destructor will be called bcz pointer\
                 is of type parent class. for making child class destructor also to be called, virtual destructor is used. 
    return 0;
}
