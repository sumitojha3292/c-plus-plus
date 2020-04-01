/* CPP for using all methods in a class
Note:- There sould be atleast six methods for defining a good class. They are mainly
1- Constructor.
2- Mutators.
3- Acessors.
4- Facilitators.
5- Enquiry.
6- Distructor.

we can define function outside aswell as inside of class.
we can define the body of function outside class using scope resolution. the main difference b/w 
these two type of methods is that if defining function body inside class then it will act as a inline function
and no seperate piece of machine code is generated. so we should use very simple, not complex logic function inside class.
but if we define function outside class then there will be seperate piece of machine code will be generated so for complex logic 
function we should use this kind of method.
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

class rectangle
{
    private:
	int length;
	int breadth;
	public:
	/******* Constructors****************/
     rectangle();
	 rectangle(int l,int b);                  
	 rectangle(rectangle &r);

  
    /*******Mutators********************/
	void set_data(int l,int b);

	/*******Acessors*******************/
	int get_length(void);
	int get_breadth(void);

	/**********Facilitators************/
	int area();
	int perimeter();
	
	/********Enquiry****************/
	bool is_square();
	
	/********Distructor****************/
	~rectangle();

};

int main()
{
	rectangle R1(10,5); // parameterized constructor
	rectangle R2(10,10);   // copy constructor
	rectangle R3(R1);       // Non Parameterized constructor
	cout<<"Area of R1= "<<R1.area()<<endl<<"Perimeter of R1= "<<R1.perimeter()<<endl;
	cout<<"Area of R2= "<<R2.area()<<endl<<"Perimeter of R2= "<<R2.perimeter()<<endl;
	cout<<"Area of R3= "<<R3.area()<<endl<<"Perimeter of R3= "<<R3.perimeter()<<endl;
	cout<<"Is R2 Square= ";
	if(R2.is_square())
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	


  return 0;
  
}





 rectangle::rectangle()
 {
	 length=0;
	 breadth=0;
 }
 
rectangle::rectangle(int l,int b)
{
	set_data(l,b);
}

rectangle::rectangle(rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}

void rectangle::set_data(int l,int b)
{
	if(l>=0)
		length=l;
	else
		length=0;
	
	if(b>=0)
		breadth=b;
	else
		breadth=0;
}

int rectangle::get_length(void)
{
	return length;
}

int rectangle::get_breadth(void)
{
	return breadth;
}

int rectangle::area()
{
	return (length*breadth);
}

int rectangle::perimeter()
{
	return (2*(length+breadth));
}


bool rectangle::is_square()
{
	return length==breadth?true:false;
}

rectangle:: ~rectangle()
{
	cout<<"Rectangle distroyed"<<endl;
}

