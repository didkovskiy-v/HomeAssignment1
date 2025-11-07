/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, unsigned int level)
    : Transformer(name, level), _faction("Decepticon"), _aggression(80) {
    std::cout << "Decepticon " << name << " created." << std::endl;
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon " << getName() << " destroyed." << std::endl;
}

std::string Decepticon::getFaction() const {
    return _faction;
}

void Decepticon::setFaction(const std::string& faction) {
    _faction = faction;
}

unsigned int Decepticon::getAggression() const {
    return _aggression;
}

void Decepticon::setAggression(unsigned int aggression) {
    if (aggression <= 100) {
        _aggression = aggression;
    }
}

bool Decepticon::attack() {
    std::cout << getName() << " is attacking with aggression " << _aggression << "!" << std::endl;
    return true;
}

bool Decepticon::sabotage() {
    std::cout << getName() << " is sabotaging enemy systems!" << std::endl;
    return true;
}
