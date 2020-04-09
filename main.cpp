/*CPP for construct of exception handling using try and catch block. 
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

class stackoverflow:public exception{};
class stackunderflow:public exception{};

class stack
{
	private:
	int *ptr;
	int top=-1;
	int size;
	
	public:
	stack(int sz)
	{
		if(sz>0)
		{
			size=sz;
			ptr=new int[size];
		}
		else
		{
			throw string("invalid size");
		}
		
	}
	
	void push(int x)
	{
		if(top==size-1)
		{
			throw stackoverflow();
		}
		top++;
		ptr[top]=x;
	}
	
	int pop()
	{
		if(top==-1)
		{
			throw stackunderflow();
		}
		return ptr[top--];
	}
};



int main()
{ 
   stack s(5);
   try
   {
	   s.push(5);
	   s.push(6);
	   s.push(7);
	   s.push(8);
	   s.push(9);
	   s.push(1);
   }
   catch(string s)
   {
	   cout<<s<<endl;
   }
   catch(class stackoverflow)
   {
	   cout<<"stackoverflow"<<endl;
   }
   catch(class stackunderflow)
   {
	   cout<<"stackunderflow"<<endl;
   }

    return 0;
}
