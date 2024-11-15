#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Menu {
protected:
    string menuName;
    vector<string> items;

public:
    Menu(const std::string& menuName); 

    virtual void addItem(const string& item);
 

    virtual void displayMenu() const;
 

    // Виртуальный деструктор для правильного удаления наследников
};
#endif // !1