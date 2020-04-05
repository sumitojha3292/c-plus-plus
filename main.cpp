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

/*************Class is derived protected from parent class*********

// Private inherited members stay inaccessible (so int a is inaccessible).
// Protected inherited members stay protected (so int b is treated as protected).
// Public inherited members become protected (so int c is treated as protected).
*/

class child: protected parent
{
	private:
	
	protected:
	/* if class is inheriting protected then all the members of parent class comes inside protected **/
	public:
	
	
	void fun_child()
	{
		//a=10;  // a is not accessible
		b=20;  // it will be protected
		c=30;  // it will be protected and can't be accessed more by objects.
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
		b=12;  // it will be protected
		c=13;  // it will be protected now because this member becomes protected in child class.
	}
	
};


int main()
{
  Grand_child G1;
  G1.fun_grand_child();
  //cout<<G1.c<<endl; // this will give error bcz c is not acessible now
  return 0;
  
}



