#include "D:\pois\Project8\Project8\Customer.h"
using namespace std;

    Customer::Customer(string Name, string lastName, Waiter* waiter)
        : DefaultPerson(Name, lastName), billAmount(0.0), waiter(waiter) {}

    void Customer::addToOrder(const string& dish, double price) {
        order.push_back(dish);
        billAmount += price;
        cout << Name << " ordered: " << dish << " ($" << price << ")" << endl;
        if (waiter) {
            waiter->takeOrder(dish);
        }
    }

    // ѕереопределение метода displayself дл€ представлени€ клиента
    void Customer::displayself() const {
        cout << "Customer Name: " << Name << ", Last name: " << lastName << endl;
        cout << "Current order: ";
        for (const auto& dish : order) {
            cout << dish << " ";
        }
        cout << endl;
        cout << "Total Bill: $" << billAmount << endl;
    }
