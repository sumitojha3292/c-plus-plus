/*CPP for using namespaces in class and function.
1-Namespace is used to remove name conflicts in a recources like functions,classes and object.
2- when we want functions,classes,object with the same name so we have to enclosed them into a namespace.*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

namespace first
{
class demo
{
	public:
    void display()
	{
		cout<<"first"<<endl;
	}

};
};

namespace second
{
class demo
{
	public:
	void display()
	{
		cout<<"second"<<endl;
	}
};
};

namespace func_1
{
	void show()
	{
		cout<<"func_1"<<endl;
	}
};

namespace func_2
{
	void show()
	{
		cout<<"func_2"<<endl;
	}
}

using namespace first;
using namespace func_2;
int main()
{ 
    demo d;
	d.display();
	show();

    return 0;
}
