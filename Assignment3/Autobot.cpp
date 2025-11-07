/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Autobot.h"

Autobot::Autobot(const std::string& name, unsigned int level)
    : Transformer(name, level), _faction("Autobot"), _morale(100) {
    std::cout << "Autobot " << name << " created." << std::endl;
}

Autobot::~Autobot() {
    std::cout << "Autobot " << getName() << " destroyed." << std::endl;
}

std::string Autobot::getFaction() const {
    return _faction;
}

void Autobot::setFaction(const std::string& faction) {
    _faction = faction;
}

unsigned int Autobot::getMorale() const {
    return _morale;
}

void Autobot::setMorale(unsigned int morale) {
    if (morale <= 100) {
        _morale = morale;
    }
}

bool Autobot::defend() {
    std::cout << getName() << " is defending the city!" << std::endl;
    return true;
}

bool Autobot::callForHelp() {
    if (getAlly()) {
        std::cout << getName() << " calls for help from " << getAlly()->getName() << "!" << std::endl;
        return true;
    }
    std::cout << getName() << " has no ally to call for help!" << std::endl;
    return false;
}
