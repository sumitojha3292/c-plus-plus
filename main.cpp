/*CPP for static members and static functions of a class.
1- Object of the inner class should be created after defination of inner class.
2- Inner class can only access the static members of the outer class. 
3- Outer class can access all the public members of the inner class(it can't access private and protected members).
4- we can also create the object of inner class outside outer class using scope resolution.
5- if we don't want inner class to visible outside outer class then we can define inner class as private.
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class outer
{
	private:
	
	int a;
	static int b;
	
	public:
	//inner i;  // we can't create inner class object before defination of its class(Rule-1)
	void func()
	{
		cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
		i.show();
	}
	
	class inner
	{
		private:
		 int c=20;
		
		protected:
		int d=30;
		
		public:

		void show()
		{
			cout<<"This is inner class:"<<endl;
			//cout<<"a= "<<a<<endl; // Rule-2
			b=10;        // Rule-2
		}
	};
	
	inner i; // Rule-1
	

};

int outer::b=0;   // static variables should also be define globally.






int main()
{ 
   outer::inner t;    // Rule-4
   t.show();         // Rule-3
   outer o;
   o.func();
   //cout<<"c= "<<o.c<<endl<<"d= "<<o.d<<endl; // Rule-3

    return 0;
}
