/* What is containership? Rewrite above program using
containership. */


#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Student {
public:
    Student() {}
    Student(const string& name, const string& id)
    : name_(name), id_(id) {}
    const string& name() const { return name_; }
    const string& id() const { return id_; }
    private:
    string name_;
    string id_;
};
class CSE 
{
public:
    CSE() {}
    CSE(const string& name, const string& id, const string& major, const string& specialization)
    : student_(name, id), major_(major), specialization_(specialization) {}
    const string& name() const { return student_.name(); }
    const string& id() const { return student_.id(); }
    const string& major() const { return major_; }
    const string& specialization() const { return specialization_; }
    private:
    Student student_;
    string major_;
    string specialization_;
};
class IT 
{
public:
    IT() {}
    IT(const string& name, const string& id, const string& major, const string& specialization)
    : student_(name, id), major_(major), specialization_(specialization) {}
    const string& name() const { return student_.name(); }
    const string& id() const { return student_.id(); }
    const string& major() const { return major_; }
    const string& specialization() const { return specialization_; }
    private:
    Student student_;
    string major_;
    string specialization_;
};
int main() 
{
    vector<CSE> cse_students;
    vector<IT> it_students;
    CSE cse1("Alice", "001", "Computer Science", "Artificial Intelligence");
    CSE cse2("Bob", "002", "Computer Science", "Computer Graphics");
    cse_students.push_back(cse1);
    cse_students.push_back(cse2);
    IT it1("Charlie", "101", "Information Technology", "Networking");
    IT it2("Dave", "102", "Information Technology", "Database Systems");
    it_students.push_back(it1);
    it_students.push_back(it2);
    cout << "CSE students:" << endl;
    for (const auto& student : cse_students) 
    {
        cout << "Name: " << student.name() << endl;
        cout << "ID: " << student.id() << endl;
        cout << "Major: " << student.major() << endl;
        cout << "Specialization: " << student.specialization() << endl;
        cout << endl;
    }
    cout << "IT students:" << endl;
    for (const auto& student : it_students) 
    {
        cout << "Name: " << student.name() << endl;
        cout << "ID: " << student.id() << endl;
        cout << "Major: " << student.major() << endl;
        cout << "Specialization: " << student.specialization() << endl;
        cout << endl;
    }
    return 0;
}