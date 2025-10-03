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
