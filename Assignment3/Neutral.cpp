/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Neutral.h"
#include <iostream>

Neutral::Neutral()
    : Transformer("Neutral", 1, 50, 10, 5), affiliation_("None"), mercenary_(false) {}

Neutral::Neutral(const std::string& name, unsigned int level, unsigned int strength,
                 unsigned int range, unsigned int ammo, const std::string& affiliation,
                 bool mercenary, int engine_power)
    : Transformer(name, level, strength, range, ammo, engine_power),
      affiliation_(affiliation), mercenary_(mercenary) {}

std::string Neutral::GetType() const
{
    std::cout << "Neutral::GetType called" << std::endl;
    return "Neutral";
}

std::string Neutral::GetAffiliation() const
{
    std::cout << "Neutral::GetAffiliation called" << std::endl;
    return affiliation_;
}

bool Neutral::GetMercenary() const
{
    std::cout << "Neutral::GetMercenary called" << std::endl;
    return mercenary_;
}

void Neutral::SetAffiliation(const std::string& affiliation)
{
    std::cout << "Neutral::SetAffiliation called" << std::endl;
    affiliation_ = affiliation;
}

void Neutral::SetMercenary(bool mercenary)
{
    std::cout << "Neutral::SetMercenary called" << std::endl;
    mercenary_ = mercenary;
}

bool Neutral::Transform()
{
    std::cout << "Neutral::Transform called" << std::endl;
    return true;
}

bool Neutral::Negotiate()
{
    std::cout << "Neutral::Negotiate called" << std::endl;
    return true;
}

std::string Neutral::ToString() const
{
    std::cout << "Neutral::ToString called" << std::endl;
    return "Neutral(name=" + name_ +
           ", affiliation=" + affiliation_ +
           ", mercenary=" + (mercenary_ ? "true" : "false") + ")";
}

std::ostream& operator<<(std::ostream& os, const Neutral& n)
{
    os << n.ToString();
    return os;
}

