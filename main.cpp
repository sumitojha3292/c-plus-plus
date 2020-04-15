/*CPP for c++11 feature smart pointers.
1- Ellipses are used for passing variable nubers of argument.
2- For taking the ellipses there should be one named argument.
*/             

#include <stdio.h>
#include <iostream>
#include <cstdarg> // needed to use ellipsis
using namespace std;

int sum(int n,...)  // ... is used for taking variable number of argument
{
	// We access the ellipsis through a va_list, so let's declare one
	va_list list;     // object is created
	
	// We initialize the va_list using va_start.
	va_start(list, n ); // for getting all these variable argument into object list
	int sum=0;
	for(int i=0;i<n;i++)
	{
		 // We use va_arg to get parameters out of our ellipsis
         // The first parameter is the va_list we're using
         // The second parameter is the type of the parameter
		sum+=va_arg(list,int); 
	}
	va_end(list); // Cleanup the va_list when we're done.
	return sum;
	
} 

int main()
{ 
  cout<<"sum= "<<sum(5,1,2,3,4,5)<<endl;
  cout<<"sum= "<<sum(3,3,6,9)<<endl;  
  return 0;
}
