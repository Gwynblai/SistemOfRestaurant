#pragma once
#ifndef SECURITYGUARD_H
#define SECURITYGUARD_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Employee.h"  
using namespace std;

class SecurityGuard : private Employee { // ��������� ������ �� Employee
private:
    bool isArmed; // ������� ������ (�������� ��� ���)
    string shift; // ���� ��� �������� ����� (��������, ������� ��� ������)
public:
    // �����������
    SecurityGuard(const string& name, int age, const string& shift, bool isArmed);

    // ����� ��� ������������� ���������
    void introduce() const;


    // ����� ��� ��������������
    void patrol() const;

};
#endif // !SECURITYGUARD_H
