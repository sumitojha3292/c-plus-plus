/* CPP for taking two input string from user */ 

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;



int main()
{
  char S1[]="x=10;y=20;z=30";
  char *token=strtok(S1,";");
  while(token!=NULL)
  {
	cout<<token<<endl;  
	token=strtok(NULL,";");// This time NULL is given because already string is passed in previous strtok(); 
  }
  
  
  return 0;
}
