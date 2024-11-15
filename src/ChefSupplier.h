#pragma once
#ifndef CHEFSUPPLIER_H
#define CHEFSUPPLIER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Chef.h"  
#include "D:\pois\Project8\Project8\Supplier.h"  
using namespace std;

class ChefSupplier : public Chef, public Supplier {
public:
    // »спользуем конструктор от Chef и Supplier дл€ инициализации обоих базовых классов
    ChefSupplier(const string& name, unsigned age, const string& specialty, const string& food, const string& supplierNumber);

    // ƒелаем метод introduce от Chef доступным в ChefSupplier
    using Chef::introduce;

    // ћетод, объедин€ющий об€занности шеф-повара и поставщика
    void cookAndSupply(const string& item, int quantity) const;


    // ”никальный метод дл€ планировани€ меню и заказа необходимых ингредиентов
    void planMenuAndOrderSupplies(const string& dish, const string& ingredient, int amount) const;

};
#endif // !CHEFSUPPLIER_H
