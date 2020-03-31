/* CPP for defining class*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

class rectangle
{
	public:
	int length;
	int breadth;
	
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
	rectangle R1,R2;
	R1.length=10;
	R1.breadth=20;
	cout<<"Area= "<<R1.area()<<endl<<"Perimeter= "<<R1.perimeter()<<endl;

  return 0;
  
}
