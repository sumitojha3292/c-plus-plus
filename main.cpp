/* CPP program to add two 2D array and print the result*/ 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
int A[2][3]={{2,5,9},{7,3,6}};
int B[2][3]={{6,3,4},{9,5,2}};
int C[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
		
	}

    return 0;
}