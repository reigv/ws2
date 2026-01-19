// employee.h

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee {

private:
    int id_num;
    float salary;

    //dynamic allocated
    char* name;

public:
    Employee();
    Employee(int, float, const char*);;

    // copy
    Employee(const Employee&);

    // deconstruct
    ~Employee();
    

};

#endif //EMPLOYEE_H_