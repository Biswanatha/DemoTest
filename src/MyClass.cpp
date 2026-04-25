#include "MyClass.hpp"
#include <iostream>

void MyClass::doSomething() {
    std::cout << "Doing something!" << std::endl;
}

int MyClass::getValue() const {
    return 42;
}