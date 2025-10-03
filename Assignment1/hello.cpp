/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment1
  */
#include <iostream>
#include <string>
#include "hello.h"

void sayHello(const string& name) {
    if (name.empty()) {
        cout << "Hello, world!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}
