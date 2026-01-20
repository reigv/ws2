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
    // assign to the available memory space - does it has to be continuous
    name = new char[length+1];

}