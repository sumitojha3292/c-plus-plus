/*CPP for function overriding method in polymorphism.
In function overriding method same function signature is defined in parent and child class. 
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class parent
{
	public:
	void display()
	{
		cout<<"this is parent class"<<endl;
	}
};

class child:public parent
{
	public:
	void display()        // this is function overiding
	{
		cout<<"this is child class"<<endl;
	}
};


int main()
{
	child c;
	c.display();  // child class display function will be called
	c.parent::display(); // parent class display function will be called 
    
    return 0;
}
