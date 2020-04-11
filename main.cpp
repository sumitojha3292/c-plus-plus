/*CPP for using Destructor in a class.
1- Destructor is a function which is called automatically when an object is destroyed.
2- When you create an object in a heap then only constructor is called. for calling a destructor 
   object should be deleted using delete operator.
3- Unlike constructor, destructor of child class is called first than parent class.so destructor
   is called from bottom to top.   
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class demo
{
	public:
    demo()
	{
		cout<<"constructor"<<endl;
	}
	
	~demo()
	{
		cout<<"destructor"<<endl;
	}

};

int main()
{  
   demo *ptr=new demo(); // constructor will be called
   delete ptr; // if commented destructor will not be called and memory allocation in heap will remain.\
                so destructor is used to release the resources allocated by the constructor.
    return 0;
}
