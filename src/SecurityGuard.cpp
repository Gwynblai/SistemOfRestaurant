#include "D:\pois\Project8\Project8\SecurityGuard.h" 


    SecurityGuard::SecurityGuard(const string& name, int age, const string& shift, bool isArmed)
        : Employee(name, age), shift(shift), isArmed(isArmed) {}

    // Метод для представления охранника
    void SecurityGuard::introduce() const {
        cout << "Security Guard " << name << ", Age: " << age
            << ", Shift: " << shift << ", Armed: "
            << (isArmed ? "Yes" : "No") << endl;
    }

    // Метод для патрулирования
    void SecurityGuard::patrol() const {
        cout << "Security Guard " << name << " is patrolling during the "
            << shift << " shift." << endl;
    }
