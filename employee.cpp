// employee.cpp - class function

#include "employee.h"
#include <cstring>
#include <iostream>

Employee::Employee(){
    id_num=0;
    salary=0.0;
    name=nullptr;
}

// Employee::Employee(): id_num(0), salary(0), name(nullptr) {
//     std::count << "Default constructor called. \n" << std::endl;
// }

Employee::Employee(int _id, float _salary, const char* _name) {
    this->id_num = _id; // use this to be safe
    this->salary = _salary;

    // dynamic means knowing the length
    int length= strlen(_name);
    // assign to the available memory space - does it has to be continuous - yes 1 continuous block of memory
    name = new char[length+1];
    // once all setuo the length -> assign value
    strcpy(name, _name);
}

Employee::Employee(const Employee& other) {
    this->id_num = other.id_num;
    this->salary = other.salary;


    // deep copy so deleting the other wont effect this
    if (other.name != nullptr)
    {
        int length = strlen(other.name);
        name = new char[length+1];
        strcpy(this->name, other.name);

    }else{
        this->name = nullptr;

    }
    
}

void Employee::print() const{
    std::cout << "Employee name: ";
    if (name!=nullptr)
    {
        std::cout<< name << std::endl; 
    } else {
        std::cout << "n/a" << std::endl;
    }
    
    std::cout << "Employee id: " << id_num << std::endl;
    std::cout << "Employee salary: " << salary << std::endl;
}

Employee::~Employee(){
    delete[] this->name;
    this->name = nullptr;

    std:cout <<"Destructor called for id" << id_num << std::endl
}