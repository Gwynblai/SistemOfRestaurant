#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"

#include "Manager.h"
#include "FoodMenu.h"
#include "Menu.h"
#include "DefaultPerson.h"
#include "Owner.h"
#include "Cashier.h"
#include "Supplier.h"
#include "Bartender.h"
#include "SecurityGuard.h"
#include "Chef.h"
#include "Waiter.h"
#include "Host.h"
#include "Cleaner.h"
#include "Customer.h"
#include "ChefSupplier.h"

using namespace std;

int main() {
    
    // Пример работы с шеф-поваром и его специализацией
    cout << "\nChef Example:" << endl;
    Chef chef("Gordon", 50, "French Cuisine", "Souffle");
    chef.cook();
    chef.introduce();


    // Пример работы с официантом и его навыками
    cout << "\nWaiter Example:" << endl;
    Waiter waiter("John", 25, 3,&chef);
    waiter.introduce();
    waiter.takeOrder("Caesar Salad");

    // Пример работы с клиентом
    cout << "\nCustomer Example:" << endl;
    Customer customer("Lily", "Smith",&waiter);
    customer.addToOrder("Spaghetti Bolognese", 12.99);
    customer.addToOrder("Tiramisu", 6.50);
    customer.displayself();

    cout << "\nCashier Example:" << endl;
    Cashier cashier("Lucy", 30, 1, 8);
    cashier.introduce(); 
    cashier.processPayment(45.50); 

    // Пример работы с владельцем ресторана
    cout << "\nOwner Example:" << endl;
    Owner owner("Mark", "Johnson", 150000.00,&cashier);
    owner.reviewCashierPerformance();
    owner.displayself();  // Вызываем displayself для владельца

   
    

    // Пример работы с охранником
    cout << "\nSecurity Guard Example:" << endl;
    SecurityGuard guard("Max", 40, "Night", true);
    guard.introduce();
    guard.patrol();

    
   

    // Пример работы с барменом
    cout << "\nBartender Example:" << endl;
    Bartender bartender("Jake", 28, "Cocktails");
    bartender.introduce();
    bartender.mixDrinks();
    bartender.serveCustomer();

    // Пример работы с поставщиком
    cout << "\nSupplier Example:" << endl;
    Supplier supplier("GlobalFood Supplies");
    supplier.displayInfo();
    supplier.supplyItem("Olive Oil", 10);

    // Пример работы с ChefSupplier, который комбинирует функции шефа и поставщика
    cout << "\nChefSupplier Example:" << endl;
    ChefSupplier chefSupplier("Nigella", 45, "Italian Cuisine", "Pizza", "Gourmet Ingredients Inc.");
    chefSupplier.cookAndSupply("Mozzarella", 5);
    chefSupplier.planMenuAndOrderSupplies("Margherita Pizza", "Basil", 20);

    // Пример работы с хостом
    cout << "\nHost Example:" << endl;
    Host host("Emily", 30, 1, 2);
    host.greetCustomer();
    host.introduce();

    // Пример работы с уборщиком
    cout << "\nCleaner Example:" << endl;
    Cleaner cleaner("Alice", 40, 2, true,&host);
    cleaner.introduce();
    cleaner.cleanArea("Kitchen");
    cleaner.receiveCleaningRequest("Bedroom");

    // Пример работы с курьером
    

    FoodMenu foodMenu;
    foodMenu.addItem("Spaghetti Bolognese", 12.99);
    foodMenu.addItem("Caesar Salad", 8.50);

    // Создание меню напитков 
   

    // Создание меню десертов
   

    // Вывод меню
    cout << "\nRestaurant Menus:\n" << endl;
    foodMenu.displayMenu();
    cout << endl;
   


    return 0;
}