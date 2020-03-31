/* CPP for class data hiding*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

class rectangle
{
    private:
	int length;
	int breadth;
	public:
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
	rectangle R1;
    R1.set_data(15,4);
	cout<<"Area= "<<R1.area()<<endl<<"Perimeter= "<<R1.perimeter()<<endl;

  return 0;
  
}
