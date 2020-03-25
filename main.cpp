/* CPP program to to print all elements of 2D array*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"("<<i<<","<<j<<")";
		}
		cout<<endl;
	}

    return 0;
}