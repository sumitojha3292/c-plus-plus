/*CPP for static members and static functions of a class.
1-static members are common for all the objects of a class.
2- static members defined inside a class should also be declare outside using scope resolution.
3-Static member functions can only access static members of a class, it can't access normal data members.
  We can call the static functions using class name and object also.
4-Static members can be used as counters and shared memory for all the objects.
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

class child;    // defining a class prototype

class test
{
	public:
	int a;
	int b;
	static int cnt;
	test()
	{
		int a=10;
		cnt++;
	}
	
	static int getcount()
	{
		//b=20;     // we can't use non static members inside static function.
		return cnt;
	}
};

int test::cnt=0; // again declared so that confirming that this static member always belong to this class using scope resolution.




int main()
{ 
    test t1,t2,t3;  // 3 objects created so count value should be 3
	cout<<t1.cnt<<endl;  // static members accessed upon objects.
	cout<<t2.getcount()<<endl;
	cout<<test::cnt<<endl;  // static members directly accessed using scope resolution. 
	cout<<test::getcount()<<endl; // static function directly accessed using scope resolution.
    return 0;
}
