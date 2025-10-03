/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment1
  */
#include <iostream>
#include <string>
#include "hello.h"

void sayHello(const std::string& name) {
    if (name.empty()) {
        std::cout << "Hello, world!" << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
}
