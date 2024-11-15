

#include "D:\pois\Project8\Project8\FoodMenu.h" 
#include <iostream>
#include <string>


FoodMenu::FoodMenu() : Menu("Food") {} 

    void FoodMenu::addItem(const string& item, double price) {
        items.push_back(item);
        prices.push_back(price);
    }

    void FoodMenu::displayMenu() const {
        cout << menuName << " Menu: ";

        for (size_t i = 0; i < items.size(); i++) {
            cout << items[i] << " ($" << prices[i] << ")";
            if (i != items.size() - 1) {
                cout << ", ";  // Если это не последний элемент, добавляем запятую
            }
        }
       
    }
