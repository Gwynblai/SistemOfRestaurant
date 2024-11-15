#include "D:\pois\Project8\Project8\Manager.h"
#include <iostream>
#include <string>
Manager::Manager(string name, int age, int experienceWork, string department)
    : Employee(name, age) {
    this->experienceWork = experienceWork;
    this->department = department;

}

void Manager::introduce() const {
    cout << "Manager " << name << ", age " << age << ", Experience: " << experienceWork << ", Department: " << department << endl;
}

void Manager::assignTask(string task, string employee) const{
    cout << "Manager " << name << " assigns task: '" << task << "' to " << employee << "." << endl;
    
}

void Manager::manageStaff() const {
    cout << "Manager " << name << " is managing the staff in the " << department << " department." << endl;
    
}