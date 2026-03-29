/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Decepticon.h"
#include <iostream>

Decepticon::Decepticon()
    : Transformer("Decepticon", 1, 50, 10, 5), treachery_level_(false), disguise_form_("Unknown") {}

Decepticon::Decepticon(const std::string& name, unsigned int level, unsigned int strength,
                       unsigned int range, unsigned int ammo, bool treachery_level,
                       const std::string& disguise_form, int engine_power)
    : Transformer(name, level, strength, range, ammo, engine_power),
      treachery_level_(treachery_level), disguise_form_(disguise_form) {}

std::string Decepticon::GetType() const
{
    std::cout << "Decepticon::GetType called" << std::endl;
    return "Decepticon";
}

bool Decepticon::GetTreacheryLevel() const
{
    std::cout << "Decepticon::GetTreacheryLevel called" << std::endl;
    return treachery_level_;
}

std::string Decepticon::GetDisguiseForm() const
{
    std::cout << "Decepticon::GetDisguiseForm called" << std::endl;
    return disguise_form_;
}

void Decepticon::SetTreacheryLevel(bool treachery_level)
{
    std::cout << "Decepticon::SetTreacheryLevel called" << std::endl;
    treachery_level_ = treachery_level;
}

void Decepticon::SetDisguiseForm(const std::string& disguise_form)
{
    std::cout << "Decepticon::SetDisguiseForm called" << std::endl;
    disguise_form_ = disguise_form;
}

bool Decepticon::Transform()
{
    std::cout << "Decepticon::Transform called" << std::endl;
    return true;
}

bool Decepticon::Sabotage()
{
    std::cout << "Decepticon::Sabotage called" << std::endl;
    return true;
}

std::string Decepticon::ToString() const
{
    std::cout << "Decepticon::ToString called" << std::endl;
    return "Decepticon(name=" + name_ +
           ", disguise=" + disguise_form_ +
           ", treacherous=" + (treachery_level_ ? "true" : "false") + ")";
}

std::ostream& operator<<(std::ostream& os, const Decepticon& d)
{
    os << d.ToString();
    return os;
}
