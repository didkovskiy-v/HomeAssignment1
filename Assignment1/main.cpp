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
    string input;
    while (getline(cin, input)) {
        sayHello(input);
    }

    return 0;
}
