#pragma once
#ifndef CHEF_H
#define CHEF_H
#include "D:\pois\Project8\Project8\Employee.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chef : public Employee {
protected:
    string specialty;
    string food;// Поле для хранения специализации шеф-повара (например, тип кухни или блюдо, которое он готовит лучше всего)
public:
    Chef(string name, unsigned age, string specialty, string food);

    void cook() const;


    void introduce() const;
 

};
#endif // !CHEF_H
