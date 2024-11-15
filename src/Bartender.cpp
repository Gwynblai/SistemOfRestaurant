#include "D:\pois\Project8\Project8\Bartender.h"

    Bartender::Bartender(const string& name, unsigned age, const string& barSpecialty)
        : Employee(name, age), barSpecialty(barSpecialty) {}

    // Переопределение метода introduce для вывода информации о бармене
    void Bartender::introduce() const{
        cout << "Bartender " << name << ", Age: " << age << endl;
        cout << "Bar Specialty: " << barSpecialty << endl;
    }

    // Метод для смешивания напитков
    void Bartender::mixDrinks() const {
        cout << name << " is mixing a " << barSpecialty << " drink." << endl;
    }

    // Метод для обслуживания клиента у бара
    void Bartender::serveCustomer() const {
        cout << name << " is serving drinks to customers at the bar." << endl;
    }
