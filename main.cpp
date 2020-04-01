/* CPP for using constructor in a class
Constructor is defined as the same name as of class.There are mainly three kind of constructor:-
1) Non parameterized
2) Parameterized
3) Copy 

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
	// 1-Non parameterized
     rectangle()
	 {
		 length=0;
		 breadth=0;
	 }


    // 2-Parameterized
	rectangle(int l,int b)   // we can also use parameterized and non parameterized constructor                           
	{                        // as a funcn overloading by initializing the arguments with zero.
		set_data(l,b);
	}
	
	// 3-Copy constructor
	rectangle(rectangle &r)
	{
		length=r.length;
		breadth=r.breadth;
	}
  

	void set_data(int l,int b)
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
	
	int get_length(void)
	{
		return length;
	}
	
	int get_breadth(void)
	{
		return breadth;
	}
	
	int area()
	{
		return (length*breadth);
	}
	
	int perimeter()
	{
		return (2*(length+breadth));
	}
};

int main()
{
	rectangle R1(5,12); // parameterized constructor
	rectangle R2(R1);   // copy constructor
	rectangle R3;       // Non Parameterized constructor
	cout<<"Area of R1= "<<R1.area()<<endl<<"Perimeter of R1= "<<R1.perimeter()<<endl;
	cout<<"Area of R2= "<<R2.area()<<endl<<"Perimeter of R2= "<<R2.perimeter()<<endl;
	cout<<"Area of R3= "<<R3.area()<<endl<<"Perimeter of R3= "<<R3.perimeter()<<endl;


  return 0;
  
}
