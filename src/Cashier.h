#pragma once
#include "D:\pois\Project8\Project8\Employee.h" 
#ifndef CASHIER_H
#define CASHIER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cashier : public virtual Employee {
protected:
    int shiftcashier;
    int workhours;

public:
    Cashier(const string& name, unsigned age, int shift, int workhours);
// Инициализация workhours

    void introduce() const;

    void processPayment(double amount) const;


};


#endif // !1

