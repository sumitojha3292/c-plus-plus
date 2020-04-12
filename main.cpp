/*CPP for serialization using class and operator overloading.*/             

#include <stdio.h>
#include <iostream>
#include <fstream>  // Including for file input output stream
using namespace std;

class student
{
	private:
	string name;
	int age;
	string gender;
	
	public:
	student()
	{
		
	}
	student(string s,int n, string m)
	{
		name=s;
		age=n;
		gender=m;
	}
	friend ofstream & operator<<(ofstream &ofs, student s); 
	friend ifstream & operator>>(ifstream &ofs, student &s);
    friend ostream & operator<<(ostream &os, student &s);
		
};

ofstream & operator<<(ofstream &ofs,student s)
{
	ofs<<s.name<<endl;
	ofs<<s.age<<endl;
	ofs<<s.gender<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs, student &s)
{
	ifs>>s.name;
	ifs>>s.age;
	ifs>>s.gender;
	
	return ifs;
}

ostream & operator<<(ostream &os, student &s)
{
	os<<"name= "<<s.name<<endl;
	os<<"age= "<<s.age<<endl;
	os<<"gender= "<<s.gender<<endl;
	return os;
}


int main()
{  
    ofstream ofs("my_cpp.txt",ios::trunc);  
	student s1("sumit",28,"male");
	ofs<<s1;
	ofs.close();
	
	ifstream ifs;
	student s2;
	ifs.open("my_cpp.txt");
	ifs>>s1;
	cout<<s1;

    return 0;
}
