#pragma once
#ifndef DEFAULTPERSON_H
#define dEFAULTPERSON_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DefaultPerson {
protected:
    string Name;
    string lastName;

public:
    DefaultPerson(string Name, string lastName);

    string getName() const;


    virtual void displayself() const;
};

#endif // !1
