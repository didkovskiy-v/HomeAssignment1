/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment1
  */
#include <iostream>
#include <string>
#include "hello.h"

int main() {
    sayHello();
    std::string input;
    while (std::getline(std::cin, input)) {
        sayHello(input);
    }

    return 0;
}
