/* CPP program to search element in a array using binary search*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int key=6,i=0;
	int start,end,mid;
    
    int arr[12]={2,4,6,8,10,12,14,16,18,20,22,24};
		start=0;
		end=11;
    for(i=0;i<12;i++)
     {
		 mid=(start+end)/2;
		 if(key==arr[mid])
		 {
			 cout<<"Element is present at "<< mid+1<<"th position"<<endl;
			 break;
			 
			 //mid=start
		 }
		 else
		 {
			 if(key>arr[mid])
			 {
				 start=mid;
			 }
			 else
			 {
				end=mid; 
			 }
			 
		 }
	  
     }	  


    return 0;
}