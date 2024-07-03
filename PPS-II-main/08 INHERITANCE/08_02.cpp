/* Consider a class network as shown in figure given below. The
class Employee derives information from both Account and
Admin classes which in turn derive information from the class
Person. Define all the four classes and write a program to create,
update and display the information contained in Employee
objects. */


#include<iostream>
#include<cstring>
using namespace std;
class person
{
    protected:
	char name[20];
	int code;
    public:
	void get_per(int c,char *s);
	void put_per();
};
void person::get_per(int c,char *s)
{
	code=c;
	strcpy(name,s);
}
void person::put_per()
{
	cout<<"Code: "<<code<<endl;
	cout<<"Name: "<<name<<endl;
}
class acc : public virtual person
{
    protected:
	float pay;
    public:
	void get_pay(double p);
	void put_pay();
};
void acc::get_pay(double p)
{
	pay=p;
}
void acc::put_pay()
{
	cout<<"Pay amount: "<<pay<<endl;
}
class admin : public virtual person
{
    protected:
	int exp;
    public:
	void get_exp(int e);
	void put_exp();
};
void admin::get_exp(int e)
{
	exp=e;
}
void admin::put_exp()
{
	cout<<"Experience: "<<exp<<endl;
}
class master : public acc,public admin
{
    public:
	void display();
};
void master::display()
{
	put_per();
	put_pay();
	put_exp();
}
int main()
{
	master p1;
    int code,exp;
    char name[20];
    double pay;
    cout<<"Code: ";
    cin>>code;
    cout<<"Name: ";
    cin>>name;
    cout<<"Amount: ";
    cin>>pay;
    cout<<"Experience: ";
    cin>>exp;
	p1.get_per(code,name);
	p1.get_pay(pay);
	p1.get_exp(exp);
	p1.display();
	return 0;
}