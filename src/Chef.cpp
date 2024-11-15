#include "D:\pois\Project8\Project8\Chef.h" 

    Chef::Chef(string name, unsigned age, string specialty, string food)
        : Employee(name, age) {
        this->specialty = specialty;
        this->food = food;
    }

    void Chef::cook() const {
        cout << "Chef " << name << ",Age:" << age << " is cooking " << food << endl;
    }

    void Chef::introduce() const {
        cout << "Chef " << name << ", Specialty: " << specialty << endl;
    }

