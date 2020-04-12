/*CPP for using file strem for writing and reading from a file.
1-For reading in a file there is a class available called 'ofstream'.
2-There are two flags available:-
  2.1- For Reading-ios::in
  2.2- For Writing-ios::out
3- For reading a file you can also use fileobject.open("file name").
4- for reading a file a same file must be existing.
5- To check end of file use syntax object.eof()  

*/             

#include <stdio.h>
#include <iostream>
#include <fstream>  // Including for file input output stream
using namespace std;


int main()
{  
    ofstream ofs("my_cpp.txt",ios::trunc);  // file is created and it will truncate the content
	ofs<<"sumit"<<endl;
	ofs<<"28"<<endl;
	ofs<<"Male"<<endl;
	ofs.close();         // file is closed
	
	ifstream ifs;   // object is created
	ifs.open("my_cpp.txt");
	if(ifs)                     // ifs will return 1 if file is open. we can also check ifs.is_open() for file opening.
	{
		cout<<"file is opened"<<endl;
	}
	
	string name,gender;
	int age;
	
	ifs>>name>>age>>gender;      // sequence should be maintained
	ifs.close();
	cout<<"name- "<<name<<endl;
	cout<<"age- "<<age<<endl;
	cout<<"gender- "<<gender<<endl;
    return 0;
}
