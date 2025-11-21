/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
private:
    bool treachery_level_;
    std::string disguise_form_;

public:
    Decepticon(const std::string& name, unsigned int level, unsigned int strength,
               unsigned int range, unsigned int ammo, bool treachery_level,
               const std::string& disguise_form, int engine_power = 100);

    bool GetTreacheryLevel() const;
    std::string GetDisguiseForm() const;

    void SetTreacheryLevel(bool treachery_level);
    void SetDisguiseForm(const std::string& disguise_form);

    bool Transform() override;
    bool Sabotage();
};
#endif
