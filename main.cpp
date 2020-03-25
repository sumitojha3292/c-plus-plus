/* CPP program to add two 2D array and print the result*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int A[2][3];

	cout<<"Enter the elements of array of 2*3 dimension"<<endl;

	for(auto& x:A)  // for each x in A(x is row here)
	{
		for(auto& y:x) // for each y in x(y is coloumn here)
		{
           cin>>y;
		}
	
		
	}
	cout<<endl<<"You Entered"<<endl;
	for(auto& x:A)  // for each x in A(x is row here)
	{
		for(auto& y:x) // for each y in x(y is coloumn here)
		{
           cout<<y<<" ";
		}
		cout<<endl;
		
	}

    return 0;
}