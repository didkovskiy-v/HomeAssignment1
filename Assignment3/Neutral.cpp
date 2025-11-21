/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Neutral.h"

Neutral::Neutral(const std::string& name, unsigned int level, unsigned int strength,
                 unsigned int range, unsigned int ammo, const std::string& affiliation,
                 bool mercenary, int engine_power)
    : Transformer(name, level, strength, range, ammo, engine_power),
      affiliation_(affiliation), mercenary_(mercenary) {}

std::string Neutral::GetAffiliation() const {
    return affiliation_;
}

bool Neutral::GetMercenary() const {
    return mercenary_;
}

void Neutral::SetAffiliation(const std::string& affiliation) {
    affiliation_ = affiliation;
}

void Neutral::SetMercenary(bool mercenary) {
    mercenary_ = mercenary;
}

bool Neutral::Transform() {
    return true;
}

bool Neutral::Negotiate() {
    return true;
}
