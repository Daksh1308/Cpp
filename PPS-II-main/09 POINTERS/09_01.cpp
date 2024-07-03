/* Create a class Account. It has three data member account id, name
and balance. Define function to assign value and display value.
Define function that search account number given by the user. If
account number exists, print detail of that account. Write a program
using array of pointers to the object. Declare at least 5 account and
print details. */


#include<iostream>
#include<cstring>
using namespace std;
class account 
{
    int account_id;
    char name[50];
    float balance;
    public:
    void set_values(int id,char n[],float bal);
    int search(int id);
    void display();
};
void account::set_values(int id, char n[], float bal) 
{
    account_id = id;
    strcpy(name, n);
    balance = bal;
}
void account::display() 
{
    cout << "Account ID: " << account_id << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}
int account::search(int id) 
{
    if(account_id == id)
        return 1;
    else
        return 0;
}
int main() 
{
    account *acc[5];
    for(int i=0; i<5; i++) 
    {
        acc[i] = new account;
        int id;
        char name[50];
        float bal;
        cout << "Enter Account ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> bal;
        acc[i]->set_values(id, name, bal);
    }
    int search_id;
    cout << "Enter Account ID to search: ";
    cin >> search_id;
    for(int i=0; i<5; i++) 
    {
        if(acc[i]->search(search_id) == 1) 
        {
            cout << "\nAccount Found!\n";
            acc[i]->display();
            return 0;
        }
    }
    cout << "Account not found!";
    return 0;
}