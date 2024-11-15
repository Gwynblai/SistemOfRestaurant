#pragma once
#ifndef WAITER_H
#define WAITER_H
#include "D:\pois\Project8\Project8\Chef.h" 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Waiter : public Employee {
private:
    int assignedTable;
    Chef* chef; // Ассоциация с шеф-поваром

public:
    Waiter(const string& name, int age, int assignedTable, Chef* chef);

    void takeOrder(const string& order) const;

};
#endif // !WAITER_H
