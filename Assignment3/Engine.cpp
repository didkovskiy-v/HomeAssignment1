#include "Engine.h"

Engine::Engine(int power) : power_(power) {}

int Engine::GetPower() const {
    return power_;
}

void Engine::SetPower(int power) {
    power_ = power;
}
