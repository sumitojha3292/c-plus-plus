/*CPP for parent class pointer and child object.
child class is always inherited from parent class so (parent-->child)
pointer of parent class can be addressed to object of child class.
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class parent
{
	public:
	void func_parent()
	{
		cout<<"parent class"<<endl;
	}
};

class child:public parent
{
	public:
	void func_child()
	{
		cout<<"child class"<<endl;
	}
};


int main()
{
	child C;
	C.func_child();
	C.func_parent();
	parent *p=&C;
	p->func_parent();  
   // p->func_child();   //	This will give error that parent class has no member as func_child().

    return 0;
}
