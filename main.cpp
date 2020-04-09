/*CPP for construct of exception handling using try and catch block.
Exceptions in C++ are implemented using three keywords that work in conjunction with 
each other: throw, try, and catch.
1- Throw statement is used to signal that an exception or error case has occurred.
2- The try block acts as an observer, looking for any exceptions that are thrown by 
   any of the statements within the try block. 
3- The catch keyword is used to define a block of code (called a catch block) that 
   handles exceptions for a single data type.
4- Try blocks and catch blocks work together.A try block detects any exceptions that are 
   thrown by statements within the try block, and routes them to the appropriate catch block for handling.
5- A try block must have at least one catch block immediately following it, but may have multiple catch 
   blocks listed in sequence.
6- Try and Catch block is used mostly when we are calling a function.   
7- We can throw any thing like integer value,double,float,string,enums,class etc.
8- We can have a catch block which can handle any type of throw is called ellipse(all-catch).
   this catch block must be the last block.
9- catch block is only executed when something is thrown.
10- We can do the nesting of try-catch block.
11- Catch block of child class should be above of parent class. it should always maintain the hierarchy. 
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;


class my_exception:public exception        // there is also built in class in c++ for exception handling. we can also use it
{
  public:
  int a;
	
};

void check_exception(int x)
{
	if(x==0)
	{
		throw 1;   // throwing integer
	}
	else if(x==1)
	{
		throw 1.5; // throwing double
	}
	else if(x==2)
	{
		throw 1.5f;  // throwing float
	}
	else if(x==3)
	{
		throw string("sumit"); // throwing string
	}
	else if(x==4)
	{
		throw my_exception(); // throwing class
	}
	else
	{
		
	}
	
}



int main()
{ 
    int a=0,cnt=5;
	while(cnt)
	{
		try
		{
		  check_exception(a);	
		}
		catch(int x)
		{
			cout<<"integer catch"<<endl;
		}
		catch(double x)
		{
			cout<<"double catch"<<endl;
		}
		catch(float x)
		{
			cout<<"float catch"<<endl;
		}
		catch(string x)
		{
			cout<<"string catch"<<endl;
		}
		catch(...)
		{
			cout<<"All catch"<<endl;
		}
		cnt--;
		a++;
	}


    return 0;
}
