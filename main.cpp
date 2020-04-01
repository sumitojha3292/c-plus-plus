/* CPP for defining structure 
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

struct rectangle
{
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
     
	rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}	

};

int main()
{
  rectangle R1(5,10);
  cout<<"Area= "<<R1.area()<<endl;
  cout<<"Perimeter= "<<R1.perimeter()<<endl;  

	
  return 0;
  
}



