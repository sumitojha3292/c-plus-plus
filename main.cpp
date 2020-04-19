/*CPP for using STL Pair class. 
1-Pair provides a way to store two heterogeneous objects as a single unit.
  syntax:- pair<T1,T2> pair1; where T1 and T2 can be data types,class etc.
           pair1=make_pair(T1,T2) for inserting values in a pair.
		   pair1.first and pair1.second for acessing members of pairs.

*/ 

#include <stdio.h>
#include <iostream>


using namespace std;

class student
{
	private:
	string name;
	int marks;
	
	public:
	student()
	{
		cout<<"student"<<endl;
		
	}
	
	student(string s, int m)
	{
		name=s;
		marks=m;
	}
	
	void show(void)
	{
		cout<<"name- "<<name<<"  "<<"marks: "<<marks<<endl;
	}
	
};

int main()
{
	/*****defining a pair****************/
	
	pair<string,string> p1;
	pair<string,int> p2;
	pair<int,student> p3;
	student s1("Neha",56); 
	
	/*****Inserting a Value*************/
	
	p1=make_pair("sumit","ojha");
	p2=make_pair("sumit",28);
	p3=make_pair(1,s1);
	//student s2=p3.second;
	
	/**********Display***************/
	cout<<"Pair-1:"<<endl<<p1.first<<"  "<<p1.second<<endl;
	cout<<"Pair-2:"<<endl<<p2.first<<"  "<<p2.second<<endl;
	cout<<"Pair-3:"<<endl<<p3.first<<"  ";
    p3.second.show();
	

   return 0;
}
