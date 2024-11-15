#include "D:\pois\Project8\Project8\Bartender.h"

    Bartender::Bartender(const string& name, unsigned age, const string& barSpecialty)
        : Employee(name, age), barSpecialty(barSpecialty) {}

    // ��������������� ������ introduce ��� ������ ���������� � �������
    void Bartender::introduce() const{
        cout << "Bartender " << name << ", Age: " << age << endl;
        cout << "Bar Specialty: " << barSpecialty << endl;
    }

    // ����� ��� ���������� ��������
    void Bartender::mixDrinks() const {
        cout << name << " is mixing a " << barSpecialty << " drink." << endl;
    }

    // ����� ��� ������������ ������� � ����
    void Bartender::serveCustomer() const {
        cout << name << " is serving drinks to customers at the bar." << endl;
    }
