#include "Autobot.h"

Autobot::Autobot(const std::string& name, unsigned int level, unsigned int strength,
                 unsigned int range, unsigned int ammo, const std::string& leader_name,
                 bool medic_mode, int engine_power)
    : Transformer(name, level, strength, range, ammo, engine_power),
      leader_name_(leader_name), medic_mode_(medic_mode) {}

std::string Autobot::GetLeaderName() const { return leader_name_; }
bool Autobot::GetMedicMode() const { return medic_mode_; }

void Autobot::SetLeaderName(const std::string& leader_name) { leader_name_ = leader_name; }
void Autobot::SetMedicMode(bool medic_mode) { medic_mode_ = medic_mode; }

bool Autobot::Transform() { return true; }
bool Autobot::Heal() { return true; }

