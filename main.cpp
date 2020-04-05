/* CPP for using ways of inheritance between parent, child and Grand child classes.
There are three ways of inheritance.
1)private.
2)protected.
3)public.
In this method there will following commits related to this mechanism.
must watch video of abdul bari's "ways of inheritance". 

 
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

class parent
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	
	void func_parent()
	{
		a=5;
		b=6;
		c=7;
	}
		
};

/*************If a Class is derived privately from parent class*********

// Private inherited members stay inaccessible (so int a is inaccessible).
// Protected inherited members become private (so int b is treated as private).
// Public inherited members become private (so int c is treated as private).
*/

class child: private parent
{
	private:
	/* if class is inheriting private then all the members of parent class comes inside private*/
	protected:
	
	public:
	
	
	void fun_child()
	{
		//a=10;  // a is not accessible
		b=20;  // it will be now private but accessible inside child class but inaccessible in further grand child class.
		c=30;  // it will be now private but accessible inside child class but inaccessible in further grand child class.
	}
	
};


class Grand_child: public child
{
	private:
	
	protected:
	
	public:
	/* if class is inheriting publically then all the members of child class comes inside public **/
	void fun_grand_child()
	{
		//a=11;  // a is not accessible
		b=12;  // not accessible(become private in child class )
		c=13;  // not accessible(become private in child class )
	}
	
};


int main()
{
  Grand_child G1;
  G1.fun_grand_child();
  //cout<<G1.c<<endl; // this will give error bcz c is not acessible now
  return 0;
  
}



