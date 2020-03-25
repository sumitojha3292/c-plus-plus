/* CPP program for pointers*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int i=0;
	int *ptr=new int[5];
	ptr[0]=1;
	ptr[1]=2;
	ptr[2]=3;
	ptr[3]=4;
	ptr[4]=5;
    for(i=0;i<5;i++)
	{
	 cout<<ptr[i]<<endl;	
	}
	
	delete []ptr;
	//Again allocate memory for 10 elements
	cout<<"New memory allocated"<<endl;
	ptr=new int[10];
	for(i=0;i<10;i++)
	{
	 cout<<ptr[i]<<endl;	
	}
	
	

    return 0;
}
