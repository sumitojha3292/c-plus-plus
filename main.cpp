/* CPP program for pointer arithmetic
pointers support only these five arithmetic operations:-
int Arr[5]={2,4,6,8,10};
int *ptr=Arr;
int *q=&Arr[4];
1)ptr++;  // pointing to next location
2)ptr--;  // pointing to previous location 
3)ptr+=3; // pointing to 3 location next where 3 is any constant value
4)ptr-=3; // pointing to 3 location previous
5)n=ptr-q;// ptr and q are seperated by 4 locations, if (n=q-ptr then n=4 that 
             means that ptr and q are seperated by 4 location and q is farther)

 */ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n, Arr[5]={2,4,6,8,10};
	int *ptr=Arr,*q=&Arr[4];
	cout<<ptr<<endl;
	// step 1
	ptr++;
	cout<<ptr<<endl;
	//step 2
	ptr--;
	cout<<ptr<<endl;
	//step 3
	ptr+=2;
	cout<<ptr<<endl;
	//step 4
	ptr-=2;
	cout<<ptr<<endl;
	// step 5
	n=ptr-q; // n=-4 which means that q is farther
	cout<<n<<endl;
	n=q-ptr;
	cout<<n<<endl;


    return 0;
}
