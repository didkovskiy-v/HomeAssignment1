/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Neutral.h"

Neutral::Neutral(const std::string& name, unsigned int level)
    : Transformer(name, level), _role("Observer"), _neutrality(90) {
    std::cout << "Neutral " << name << " created." << std::endl;
}

Neutral::~Neutral() {
    std::cout << "Neutral " << getName() << " destroyed." << std::endl;
}

std::string Neutral::getRole() const {
    return _role;
}

void Neutral::setRole(const std::string& role) {
    _role = role;
}

unsigned int Neutral::getNeutrality() const {
    return _neutrality;
}

void Neutral::setNeutrality(unsigned int neutrality) {
    if (neutrality <= 100) {
        _neutrality = neutrality;
    }
}

bool Neutral::mediate() {
    std::cout << getName() << " is trying to mediate between factions." << std::endl;
    return true;
}

bool Neutral::observe() {
    std::cout << getName() << " is observing the battlefield." << std::endl;
    return true;
}
