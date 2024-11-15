#pragma once
#ifndef CLEANER_H
#define CLEANER_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project8\Project8\Host.h"  
using namespace std;

class Cleaner : public Employee {
private:
    int shift; // Смена
    bool isOnDuty; // Статус: на смене или нет
    Host* host;

public:
    Cleaner(const string& name, unsigned age, int shift, bool isOnDuty, Host* host);

    void cleanArea(const string& area) const;


    void introduce() const;


    void receiveCleaningRequest(const string& area) const;

};
#endif // !CLEANER_H
