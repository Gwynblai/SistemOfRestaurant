#pragma once
#ifndef BARTENDER_H
#define BARTENDER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Employee.h"  
using namespace std;

class Bartender : protected Employee {
private:
    string barSpecialty; // ������������� ������� (��������, �������� ��� ����)
public:
    // ����������� ������ Bartender
    Bartender(const string& name, unsigned age, const string& barSpecialty);

    // ��������������� ������ introduce ��� ������ ���������� � �������
    void introduce() const;
 

    // ����� ��� ���������� ��������
    void mixDrinks() const;
 

    // ����� ��� ������������ ������� � ����
    void serveCustomer() const;

};
#endif // !1
