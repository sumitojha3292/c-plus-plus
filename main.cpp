/*CPP for returning multiple values from function using class.
In this program maximum,minm,avg value from array is returned from a function */             

#include <stdio.h>
#include <iostream>
#include <cstdarg> // needed to use ellipsis
using namespace std;

class Mul_val
{
	public:
	int max;
	int minm;
	float avg;
	
};

Mul_val test_fucn(int *arr,int size)
{
	int i=0;
	Mul_val C;
	C.max=arr[0];
	C.minm=arr[0];
	C.avg=0;
	for(i=0;i<size;i++)
	{
		if(C.max>arr[i])
		{
			C.max=arr[i];
		}
		if(C.minm<arr[i])
		{
			C.minm=arr[i];
		}
		C.avg+=arr[i];
		
	}
	C.avg/=size;
	return C;
}

int main()
{ 
  int arr[5]={2,5,3,7,1};
  Mul_val M;
  M=test_fucn(arr,5);
  cout<<"Maximum= "<<M.max<<endl;
  cout<<"Minimum= "<<M.minm<<endl;
  cout<<"Average= "<<M.avg<<endl;
 
  return 0;
}
