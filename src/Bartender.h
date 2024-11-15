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
    string barSpecialty; // Специализация бармена (например, коктейли или пиво)
public:
    // Конструктор класса Bartender
    Bartender(const string& name, unsigned age, const string& barSpecialty);

    // Переопределение метода introduce для вывода информации о бармене
    void introduce() const;
 

    // Метод для смешивания напитков
    void mixDrinks() const;
 

    // Метод для обслуживания клиента у бара
    void serveCustomer() const;

};
#endif // !1
