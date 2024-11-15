#pragma once
#ifndef FOODMENU_H
#define FOODMENU_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Menu.h" 
using namespace std;


class FoodMenu : public Menu {
private:
    vector<double> prices;

public:
    FoodMenu(); 

    void addItem(const string& item, double price);

    void displayMenu() const override;

};
#endif // !1
