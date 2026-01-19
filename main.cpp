#include <iostream>
#include "employee.h"

void showEmployee(Employee employee) {
    std::cout << "Inside showEmployee(): ";
    employee.print();
}

int main() {
    Employee employee1;  
    employee1.print();

    Employee employee2(123, 3.8, "Alice");
    employee2.print();

    Employee employee3 = employee2;
    employee3.print();

    showEmployee(employee2);

    return 0;
}
