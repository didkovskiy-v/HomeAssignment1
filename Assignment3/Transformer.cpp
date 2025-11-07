/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Transformer.h"

Engine::Engine(const std::string& type) : _type(type) {
    std::cout << "Engine created: " << _type << std::endl;
}

Engine::~Engine() {
    std::cout << "Engine destroyed: " << _type << std::endl;
}

std::string Engine::getType() const {
    return _type;
}

void Engine::setType(const std::string& type) {
    _type = type;
}

Transformer::Transformer(const std::string& name, unsigned int level)
    : _name(name), _level(level), _strength(100), _fuel(100), _engine("Standard"), _ally(nullptr) {
    std::cout << "Transformer " << _name << " created." << std::endl;
}

Transformer::~Transformer() {
    std::cout << "Transformer " << _name << " destroyed." << std::endl;
}

std::string Transformer::getName() const {
    return _name;
}

void Transformer::setName(const std::string& name) {
    _name = name;
}

unsigned int Transformer::getLevel() const {
    return _level;
}

void Transformer::setLevel(unsigned int level) {
    if (level > 0) {
        _level = level;
    }
}

unsigned int Transformer::getStrength() const {
    return _strength;
}

void Transformer::setStrength(unsigned int strength) {
    if (strength <= 1000) {
        _strength = strength;
    }
}

unsigned int Transformer::getFuel() const {
    return _fuel;
}

void Transformer::setFuel(unsigned int fuel) {
    if (fuel <= 100) {
        _fuel = fuel;
    }
}

bool Transformer::move() {
    if (_fuel > 0) {
        _fuel--;
        std::cout << _name << " is moving. Fuel left: " << _fuel << std::endl;
        return true;
    }
    std::cout << _name << " has no fuel to move!" << std::endl;
    return false;
}

bool Transformer::transform() {
    std::cout << _name << " is transforming!" << std::endl;
    return true;
}

bool Transformer::fire() {
    if (_fuel > 0 && _strength > 0) {
        _fuel -= 5;
        _strength -= 10;
        std::cout << _name << " fired! Strength: " << _strength << ", Fuel: " << _fuel << std::endl;
        return true;
    }
    std::cout << _name << " cannot fire: low fuel or strength!" << std::endl;
    return false;
}

void Transformer::setAlly(Transformer* ally) {
    _ally = ally;
}

Transformer* Transformer::getAlly() const {
    return _ally;
}

void Transformer::internalCheck() {
    std::cout << "Internal check for " << _name << std::endl;
}
