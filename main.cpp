/* CPP program for Reference */ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int x=10;
	/*Reference is declared and initialized at same time, it is used for giving nick name to variable.
	it doesn't required any memory. and refernce can't be used with same name inside the same function for 
	different variables */
	int &y=x;  
	cout<<"x= "<<x<<endl;
	cout<<"Y= "<<y<<endl;
	x++;
	cout<<"Y= "<<y<<endl;
	y++;
	cout<<"X= "<<x<<endl;
	cout<<"address of X= "<<&x<<endl;
	cout<<"address of Y= "<<&y<<endl;
	

    return 0;
}
