#pragma once

#ifndef MANAGER_H  
#define MANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Employee.h"
using namespace std;

class Manager : public Employee {
protected:
    int experienceWork;
    string department;

public:
    Manager(string name, int age, int experienceWork, string department);




    void introduce() const override;
       

    void assignTask(string task, string employee) const;
       

    void manageStaff() const;
      
};


#endif