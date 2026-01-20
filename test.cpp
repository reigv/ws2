// test station

#include <iostream>

int main () {
    int *pnum = nullptr;
    pnum = new int;

    *pnum = 21;

    std::cout << "address: " << pnum << std::endl;
    std::cout << "value: " << *pnum << std::endl;

}