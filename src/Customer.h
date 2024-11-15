#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\DefaultPerson.h"  
#include "D:\pois\Project8\Project8\Waiter.h" 
using namespace std;
class Customer : public DefaultPerson {
private:
    vector<string> order;
    double billAmount;
    Waiter* waiter; // Ассоциация с официантом

public:
    Customer(string Name, string lastName, Waiter* waiter);

    void addToOrder(const string& dish, double price);


        // Переопределение метода displayself для представления клиента
    void displayself() const; 
 
};
#endif // !CUSTOMER_H
