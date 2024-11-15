#include "D:\pois\Project8\Project8\Supplier.h"


    Supplier::Supplier(const string& number) : number(number) {}

    void Supplier::supplyItem(const string& item, int quantity) const {
        cout << number << " supplies " << quantity << " units of " << item << endl;
    }

    void Supplier::displayInfo() const {
        cout << "Supplier: " << number << endl;
    }
