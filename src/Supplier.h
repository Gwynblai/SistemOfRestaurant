#pragma once
#ifndef SUPPLIER_H
#define SUPPLIER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Supplier {
protected:
    string number;
public:
    Supplier(const string& number);

    void supplyItem(const string& item, int quantity) const;


    void displayInfo() const;

};
#endif // !SUPPLIER_H
