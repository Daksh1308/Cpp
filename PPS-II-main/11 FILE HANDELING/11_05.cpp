/* WAP to copy contents of one file to another. */


#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string line;
	ifstream ini_file{"01.txt"};
	ofstream out_file{ "copy.txt" };
	if (ini_file && out_file)
    {
		while(getline(ini_file, line)) 
        {
			out_file<<line<<endl;
		}
		cout<<"Copy Finished"<<endl;
	}
	else 
    {
		cout<<"Cannot read File";
	}
    ifstream f1("1.txt");
    cout<<"Original: "<<f1.rdbuf()<<endl;
    ifstream f2("copy.txt");
    cout<<"Duplicate: "<<f2.rdbuf();
    f1.close();
    f2.close();
	ini_file.close();
	out_file.close();
	return 0;
}