/*CPP for polymorphism using virtual function overiding.
A virtual function is a special type of function that, when called, resolves 
to the most-derived version of the function that exists between the base 
and derived class. This capability is known as polymorphism.
when same instruction is executing different results, it is known as polymorphism.

*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class parent
{
	public:
	virtual void display()
	{
		cout<<"this is parent class"<<endl;
	}
};

class child_1:public parent
{
	public:
	void display()        // this is function overiding
	{
		cout<<"this is child_1 class"<<endl;
	}
};


class child_2:public parent
{
	public:
	void display()        // this is function overiding
	{
		cout<<"this is child_2 class"<<endl;
	}
};

/* ptr->display() is used twice in main function but each time 
giving different result is known as polymorphism */

int main()
{
	child_1 c1;
	child_2 c2;
	parent *ptr=&c1;
	c1.parent::display();
	ptr->display(); 
	ptr=&c2;
	ptr->display();
	c2.parent::display();

    
    return 0;
}
