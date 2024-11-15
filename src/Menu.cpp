#include "D:\pois\Project8\Project8\Menu.h"
#include <iostream>
#include <string>



Menu::Menu(const std::string& menuName) : menuName(menuName) {} 

    void Menu::addItem(const string& item) {
        items.push_back(item);
    }

    void Menu::displayMenu() const {
        cout << menuName << " Menu:" << endl;
        for (const auto& item : items) {
            cout << "- " << item << endl;
        }
    }


