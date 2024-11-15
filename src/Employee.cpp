#include "D:\pois\Project8\Project8\Employee.h" 

Employee::Employee(string name, int age): name(name), age(age){}

string Employee:: getname() const { 
    return name;
}
    
void Employee::introduce() const {
    std::cout << "Employee: " << name << ",Age: " << age;

}
