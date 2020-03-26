/* CPP for string */ 

#include <stdio.h>
#include <iostream>
using namespace std;



int main()
{
 char s1[20];
 char s2[20];
 
 cout<<"Enter 1st name:- "<<endl;
 cin.get(s1,20);
 cout<<"Hello "<<s1<<endl;
 cin.ignore(); // This is added because after giving input, pressing the enter key, enter key taken into 2nd string.
 cout<<"Enter 2nd name:- "<<endl;
 cin.get(s2,20);
 cout<<"Hello "<<s2<<endl;
 
 

    return 0;
}
