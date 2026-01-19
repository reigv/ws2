// employee.cpp - class function

#include "employee.h"
#include <cstring>

Employee::Employee(){
    id_num=0;
    salary=0.0;
    name=nullptr;
}

Employee::Employee(int _id, float _salary, const char* _name) {
    this->id_num = _id; // use this to be safe
    this->salary = _salary;

    // dynamic means knowing the length
    int length= strlen(_name);
    // 

    name = new char
}