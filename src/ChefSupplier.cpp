#include "D:\pois\Project8\Project8\ChefSupplier.h"


    ChefSupplier::ChefSupplier(const string& name, unsigned age, const string& specialty, const string& food, const string& supplierNumber)
        : Chef(name, age, specialty, food), Supplier(supplierNumber) {}

  
    // ћетод, объедин€ющий об€занности шеф-повара и поставщика
    void ChefSupplier::cookAndSupply(const string& item, int quantity) const {
        cook();                  // »спользуем метод cook из класса Chef
        supplyItem(item, quantity); // »спользуем метод supplyItem из класса Supplier
    }

    // ”никальный метод дл€ планировани€ меню и заказа необходимых ингредиентов
    void ChefSupplier::planMenuAndOrderSupplies(const string& dish, const string& ingredient, int amount) const {
        cout << "Planning menu for today with dish: " << dish << endl;
        cout << "Ordering supplies..." << endl;
        supplyItem(ingredient, amount); // »спользуем метод supplyItem из класса Supplier
        cout << "Ingredients for " << dish << " have been ordered." << endl;
    }
