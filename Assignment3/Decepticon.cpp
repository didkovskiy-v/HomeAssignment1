/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, unsigned int level, unsigned int strength,
                       unsigned int range, unsigned int ammo, bool treachery_level,
                       const std::string& disguise_form, int engine_power)
    : Transformer(name, level, strength, range, ammo, engine_power),
      treachery_level_(treachery_level), disguise_form_(disguise_form) {}

bool Decepticon::GetTreacheryLevel() const { return treachery_level_; }
std::string Decepticon::GetDisguiseForm() const { return disguise_form_; }

void Decepticon::SetTreacheryLevel(bool treachery_level) { treachery_level_ = treachery_level; }
void Decepticon::SetDisguiseForm(const std::string& disguise_form) { disguise_form_ = disguise_form; }

bool Decepticon::Transform() { return true; }
bool Decepticon::Sabotage() { return true; }

