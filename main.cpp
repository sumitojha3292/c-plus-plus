/* CPP for class using pointer and allocate memory from heap*/ 

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
	rectangle *R1= new rectangle;  // Memory is allocated from heap
	R1->length=10;
	R1->breadth=20;
	cout<<"Area= "<<R1->area()<<endl<<"Perimeter= "<<R1->perimeter()<<endl;

  return 0;
  
}
