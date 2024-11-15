#include "D:\pois\Project8\Project8\ChefSupplier.h"


    ChefSupplier::ChefSupplier(const string& name, unsigned age, const string& specialty, const string& food, const string& supplierNumber)
        : Chef(name, age, specialty, food), Supplier(supplierNumber) {}

  
    // �����, ������������ ����������� ���-������ � ����������
    void ChefSupplier::cookAndSupply(const string& item, int quantity) const {
        cook();                  // ���������� ����� cook �� ������ Chef
        supplyItem(item, quantity); // ���������� ����� supplyItem �� ������ Supplier
    }

    // ���������� ����� ��� ������������ ���� � ������ ����������� ������������
    void ChefSupplier::planMenuAndOrderSupplies(const string& dish, const string& ingredient, int amount) const {
        cout << "Planning menu for today with dish: " << dish << endl;
        cout << "Ordering supplies..." << endl;
        supplyItem(ingredient, amount); // ���������� ����� supplyItem �� ������ Supplier
        cout << "Ingredients for " << dish << " have been ordered." << endl;
    }
