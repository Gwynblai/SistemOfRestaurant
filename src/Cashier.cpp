#include "D:\pois\Project8\Project8\Cashier.h"


    Cashier::Cashier(const string& name, unsigned age, int shift, int workhours)
        : Employee(name, age), // ����� ������������ �������� ������
        shiftcashier(shift),        // ������������� shift
        workhours(workhours) {} // ������������� workhours

    void Cashier::introduce() const {
        cout << "Cashier " << name << ", age " << age
            << ", Shift: " << shiftcashier
            << ", Work Hours: " << workhours << endl;
    }
    void Cashier::processPayment(double amount) const {
        cout << "Cashier " << name << " processed a payment of $" << amount << "." << endl;
    }

