/*CPP for accessing private,protected and public data member on object by using friend function.*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

class child;    // defining a class prototype


class parent
{
	private:
	int a;
	protected:
	int b;	
	public:
	int c;
	friend void func();    // declaring a friend function
	friend class child;   // declaring a friend class
	
	

};


void func()
{
	parent p;        // we can only acess the private member upon object.we can't acess the private member directly.
	p.a=1;
	p.b=2;
	p.c=3;
	cout<<"In func:"<<endl;
	cout<<"a= "<<p.a<<endl<<"b= "<<p.b<<endl<<"c= "<<p.c<<endl;
	
}

class child
{
	public:
	parent p1;
	
	void display()
	{
		p1.a=10;    // we can only acess the private member upon object.we can't acess the private member directly.
		p1.b=20;
		p1.c=30;
		cout<<"In class child:"<<endl;
		cout<<"a= "<<p1.a<<endl<<"b= "<<p1.b<<endl<<"c= "<<p1.c<<endl;
		
		
		
	}
};




int main()
{ 
    child c;
	c.display();
    func();
    return 0;
}
