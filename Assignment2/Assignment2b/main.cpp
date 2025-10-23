/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment2b
  */
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::string token;

    double* stack = new double[1000];
    int top = 0;

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            double b = stack[--top];
            double a = stack[--top];
            switch (token[0]) {
                case '+': stack[top++] = a + b; break;
                case '-': stack[top++] = a - b; break;
                case '*': stack[top++] = a * b; break;
                case '/': stack[top++] = a / b; break;
            }
        } else {
            stack[top++] = std::stod(token);
        }
    }

    std::cout << stack[top - 1] << std::endl;
    delete[] stack;
    return 0;
}
