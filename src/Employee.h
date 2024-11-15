#pragma once
#ifndef EMPLOYEE_H  
#define EMPLOYEE_H 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee { // ������� �����
protected:
    string name;
    int age;    // ���� �����
public:
    Employee(string name, int age);
   
    string getname() const;
    

    virtual void introduce() const; // ������ ����������� �����
};


#endif