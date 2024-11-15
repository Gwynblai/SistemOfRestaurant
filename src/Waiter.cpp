#include "D:\pois\Project8\Project8\Waiter.h"


    Waiter::Waiter(const string& name, int age, int assignedTable, Chef* chef)
        : Employee(name, age), assignedTable(assignedTable), chef(chef) {}

    void Waiter::takeOrder(const string& order) const {
        cout << "Waiter " << name << " is taking order: '" << order << "' for table " << assignedTable << "." << endl;
        if (chef) {
            cout << "Waiter informs Chef " << chef->getname() << " about the order." << endl;
            chef->cook(); // Пример обращения к шеф-повару
        }
    }
