#include "D:\pois\Project8\Project8\Host.h" 

    Host::Host(const string& name, unsigned age, int greetingStyle, int assignedArea)
        : Employee(name, age), greetingStyle(greetingStyle), assignedArea(assignedArea) {}

    void Host::greetCustomer() const {
        if (greetingStyle == 0) {
            cout << "Host " << name << ": Welcome to our restaurant. Please follow me to your table." << endl;
        }
        else {
            cout << "Host " << name << ": Hi! So glad you're here! I'll show you to your table!" << endl;
        }
    }

    void Host::introduce() const {
        cout << "Host " << name << ", Age: " << age
            << ", Assigned Area: " << assignedArea
            << ", Greeting Style: " << (greetingStyle == 0 ? "Formal" : "Friendly") << endl;
    }
