/*CPP for using const qualifier in a class.*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

class demo
{
	public:
	int x=10;
	int y=20;
	
	void display()const  // defining a function as a constant
	{
		//x++; // it will give error 
		//y++; // it will give error 
		cout<<"display function"<<endl<<"value of x= "<<x<<endl<<"value of y= "<<y<<endl;
	}
	
   void increment()
	{
		x++;
		y++;
		cout<<"increment func"<<endl<<"value of x= "<<x<<endl<<"value of y= "<<y<<endl;
	}
};

int main()
{ 
    demo d;
	d.display();
	d.increment();

    return 0;
}
