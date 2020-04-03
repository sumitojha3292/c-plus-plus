/* CPP for using Inheritance mechanism from existing rectangle class.
In this program we will derive new class called cuboid(having height as new data member) using existing class rectangle.
cuboid is displayed using insertion operator(<<) by friend operator overloading method.   
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

/*********Inheritate class**********************/
class cuboid: public rectangle
{
	private:
	int height;
	public:
	cuboid(int l,int b,int h);
	int set_height(int h);
	int get_height(void);
	int volume();
	friend ostream & operator<<(ostream &out, cuboid &C);
	
	
	
};

int main()
{
cuboid C1(5,10,15);
cout<<C1;

//cout<<"Volume= "<<C1.volume()<<" unit cube"<<endl;	


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


/*****Cuboid class*********************/
cuboid::cuboid(int l=0,int b=0,int h=0)
{
	set_height(h);
	set_data(l,b);
}

int cuboid::get_height(void)
{
 return height;	
}

int cuboid::set_height(int h)
{
	if(h>=0)
		height=h;
	else
		height=0;
}

int cuboid::volume(void)
{
	return (get_height()*get_breadth()*get_length());
}

ostream & operator<<(ostream &out, cuboid &C)
{
	out<<"length= "<<C.get_length()<<endl<<"breadth= "<<C.get_breadth()<<endl<<"Height= "<<C.height<<endl<<"Volume= "<<C.volume()<<endl;
	return out;
}

