#pragma once
#ifndef OWNER_H
#define OWNER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\DefaultPerson.h"  
#include "D:\pois\Project8\Project8\Cashier.h"

using namespace std;




class Owner : public DefaultPerson { 
private:
    double capital;
    Cashier* cashier; // Ассоциация с кассиром

public:
    Owner(string Name, string lastName, double capital, Cashier* cashier);


    void displayself() const;
      

    void reviewCashierPerformance() const;




};

#endif // !1