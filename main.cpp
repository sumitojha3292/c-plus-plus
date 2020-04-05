/*CPP for checking if child class pointer can be addressed to parent class object.
child class is always inherited from parent class so (parent-->child)
parent class can always hold the address of next child class and child class can
hold the address of next grand child class but this is not applicable to backward direction. 
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
	parent p;
	child *C=&p;  //	This will give error because child class is derived from parent class so it can't hold the address of parent class.
	C->func_child();
	C->func_parent();
    
    return 0;
}
