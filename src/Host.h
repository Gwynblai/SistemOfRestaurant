#pragma once
#ifndef HOST_H
#define HOST_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Employee.h"  
using namespace std;
class Host : public Employee {
private:
    int greetingStyle; // 0 - �����������, 1 - �����������
    int assignedArea;  // ����, �� ������� �������� ����

public:
    Host(const string& name, unsigned age, int greetingStyle, int assignedArea);

    void greetCustomer() const;


    void introduce() const;
 
};
#endif // !HOST_H
