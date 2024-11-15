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
    // ���������� ����������� �� Chef � Supplier ��� ������������� ����� ������� �������
    ChefSupplier(const string& name, unsigned age, const string& specialty, const string& food, const string& supplierNumber);

    // ������ ����� introduce �� Chef ��������� � ChefSupplier
    using Chef::introduce;

    // �����, ������������ ����������� ���-������ � ����������
    void cookAndSupply(const string& item, int quantity) const;


    // ���������� ����� ��� ������������ ���� � ������ ����������� ������������
    void planMenuAndOrderSupplies(const string& dish, const string& ingredient, int amount) const;

};
#endif // !CHEFSUPPLIER_H
