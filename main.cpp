/*CPP for Understanding concept of Abstract class.
Class which has a pure virtual function is called Abstract class. In abstract class
we can't create the object of abstract class but we can create the pointer of it to achieve
polymorphism.
Purpose of abstract class is to force the child class to have function overiding(polymorphism) of that pure 
virtual function. if child class is not overiding then it will also become abstract class. for child class To become concrete
class it should overide the function.

*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class parent
{
	public:
	void func1()
	{
		cout<<"Parent class func1"<<endl;
	}
	virtual void func2()=0;  //pure virtual function by removing the body and assigning it  to zero 

};

class child:public parent
{
	public:
	void func2()
	{
		cout<<"child class func2"<<endl;
	}
	

};



int main()
{
	//parent p;  // parent class is abstract so we can't create an object of it.
	//p.func1();
	child c;     // child class is concrete class 
	c.func1();
	c.func2();
	parent *ptr=&c;  // as parent class is abstract so we can create pointer of it.
	ptr->func1();
	
 
    return 0;
}
