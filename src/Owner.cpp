#include "D:\pois\Project8\Project8\Owner.h"
#include "D:\pois\Project8\Project8\Cashier.h"
#include "D:\pois\Project8\Project8\DefaultPerson.h" 


#include <iostream>
#include <string>


    Owner::Owner(string Name, string lastName, double capital, Cashier* cashier)
        : DefaultPerson(Name, lastName), capital(capital), cashier(cashier) {}

    void Owner::displayself() const{ 
        cout << "Owner:" << Name << lastName << ",Capital: " << capital << endl;

    }

    void Owner::reviewCashierPerformance() const {
        if (cashier) {
            cout << "Owner " << Name << " is reviewing cashier " << cashier->getname()
                << "'s performance and payment processing history." << endl;
        }
    }



