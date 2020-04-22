/*CPP for using STL tuple class. 
1-Tuple provides a way to store multiple heterogeneous objects as a single unit.
  syntax:- tuple<T1,T2,T3..,Tn> Tuple1; where T1 to Tn can be data types,class etc.
           Tuple1=make_tuple(T1,T2,..Tn) for inserting values in a pair.
		   For acessing members of tuple use get<0>(Tuple1) for acessing first member of tuple
		   and get<n>(Tuple1) for nth member of Tuple1 .

*/ 

#include <stdio.h>
#include <iostream>
#include<tuple>


using namespace std;

class student
{
	private:
	string name;
	int marks;
	
	public:
	student()
	{
		cout<<"Student Info:"<<endl;
		
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
	/*****defining a Tuple****************/
	tuple<student,string,int,string,string> t1; 
	student s1("Sumit",85);
	/*****Inserting a Value*************/
	t1=make_tuple(s1,"Age:",28,"Hobby:","cricket");
	
	/**********Display*****************/
	s1.show();
	cout<<get<1>(t1)<<endl;	
	cout<<get<2>(t1)<<endl;
	cout<<get<3>(t1)<<endl;
	cout<<get<4>(t1)<<endl;
	

   return 0;
}
