/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Engine.h"
#include <iostream>

Engine::Engine() : power_(100) {}

Engine::Engine(int power) : power_(power) {}

int Engine::GetPower() const
{
    std::cout << "Engine::GetPower called" << std::endl;
    return power_;
}

void Engine::SetPower(int power)
{
    std::cout << "Engine::SetPower called" << std::endl;
    power_ = power;
}

std::string Engine::ToString() const
{
    std::cout << "Engine::ToString called" << std::endl;
    return "Engine(power=" + std::to_string(power_) + ")";
}

std::ostream& operator<<(std::ostream& os, const Engine& engine)
{
    os << engine.ToString();
    return os;
}
