/* CPP program to to print pattern 

* * * * *
  * * * *
    * * *
	  * *
	    *
*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		for(int j=0;j<=i;j++)
		{
		  cout<<" ";	
		}
		
	}

    return 0;
}