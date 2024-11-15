#pragma once
#ifndef SECURITYGUARD_H
#define SECURITYGUARD_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Employee.h"  
using namespace std;

class SecurityGuard : private Employee { // Наследуем только от Employee
private:
    bool isArmed; // Наличие оружия (вооружен или нет)
    string shift; // Поле для хранения смены (например, дневная или ночная)
public:
    // Конструктор
    SecurityGuard(const string& name, int age, const string& shift, bool isArmed);

    // Метод для представления охранника
    void introduce() const;


    // Метод для патрулирования
    void patrol() const;

};
#endif // !SECURITYGUARD_H
