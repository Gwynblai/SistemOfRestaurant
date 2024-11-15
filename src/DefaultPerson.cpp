
#include "D:\pois\Project8\Project8\DefaultPerson.h"



    DefaultPerson::DefaultPerson(string Name, string lastName) :Name(Name), lastName(lastName) {};

    string DefaultPerson::getName() const {
        return Name;
    }

    void DefaultPerson::displayself() const {
        std::cout << "Name: " << Name << ",LastName: " << lastName << endl;
    }
