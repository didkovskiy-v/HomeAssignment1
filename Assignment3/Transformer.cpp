#include "Transformer.h"

Transformer::Transformer(const std::string& name, unsigned int level, unsigned int strength,
                         unsigned int range, unsigned int ammo, int engine_power)
    : name_(name), level_(level), strength_(strength), range_(range), ammo_(ammo),
      engine_(engine_power), ally_(nullptr) {}

std::string Transformer::GetName() const { return name_; }
unsigned int Transformer::GetLevel() const { return level_; }
unsigned int Transformer::GetStrength() const { return strength_; }
unsigned int Transformer::GetRange() const { return range_; }
unsigned int Transformer::GetAmmo() const { return ammo_; }
const Engine& Transformer::GetEngine() const { return engine_; }
Transformer* Transformer::GetAlly() const { return ally_; }

void Transformer::SetName(const std::string& name) { name_ = name; }
void Transformer::SetLevel(unsigned int level) { level_ = level; }
void Transformer::SetStrength(unsigned int strength) { strength_ = strength; }
void Transformer::SetRange(unsigned int range) { range_ = range; }
void Transformer::SetAmmo(unsigned int ammo) { ammo_ = ammo; }
void Transformer::SetEnginePower(int power) { engine_.SetPower(power); }
void Transformer::SetAlly(Transformer* ally) { ally_ = ally; }

bool Transformer::Move() { return true; }
bool Transformer::Fire() { if (ammo_ > 0) ammo_--; return true; }
bool Transformer::Transform() { return true; }

void Transformer::TakeDamage(unsigned int damage) {
    if (damage >= strength_) strength_ = 0;
    else strength_ -= damage;
}

bool Transformer::IsAlive() const { return strength_ > 0; }

