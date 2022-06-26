#include <iostream>
#include <fstream>
using namespace std;

int main()

{
	fstream obj;

	obj.open("manan.txt", ios::out);	

	obj << "\nHello I am Manan!";	
	
	obj << "\nThis is my first file";

	obj.close();

	obj.open("manan.txt", ios:: in);	

	while (!obj.eof())

	{
		string str;

		obj >> str;	

		cout << str << "\n";	

	}

	obj.close();	

	return 0;

}
