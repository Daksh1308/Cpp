/* What is this pointer? Write a complete program to illustratethe use
of this pointer. */


#include <iostream>    
using namespace std;    
class Animal 
{    
    public:    
	void eat()
	{      
		cout<<"Eating...";      
	}        
};     
class Dog: public Animal      
{      
	public:    
	void eat()      
		{
			cout<<"Eating bread...";      
		}
};    
int main(void) 
{    
	Dog d = Dog();      
	d.eat();    
	return 0;    
}  