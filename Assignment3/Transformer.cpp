/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Transformer.h"
#include <iostream>

Transformer::Transformer()
    : name_("Unknown"), level_(1), strength_(50), range_(10), ammo_(5),
      engine_(100), ally_(nullptr) {}

Transformer::Transformer(const std::string& name, unsigned int level, unsigned int strength,
                         unsigned int range, unsigned int ammo, int engine_power)
    : name_(name), level_(level), strength_(strength), range_(range), ammo_(ammo),
      engine_(engine_power), ally_(nullptr) {}

std::string Transformer::GetName() const
{
    std::cout << "Transformer::GetName called" << std::endl;
    return name_;
}

unsigned int Transformer::GetLevel() const
{
    std::cout << "Transformer::GetLevel called" << std::endl;
    return level_;
}

unsigned int Transformer::GetStrength() const
{
    std::cout << "Transformer::GetStrength called" << std::endl;
    return strength_;
}

unsigned int Transformer::GetRange() const
{
    std::cout << "Transformer::GetRange called" << std::endl;
    return range_;
}

unsigned int Transformer::GetAmmo() const
{
    std::cout << "Transformer::GetAmmo called" << std::endl;
    return ammo_;
}

const Engine& Transformer::GetEngine() const
{
    std::cout << "Transformer::GetEngine called" << std::endl;
    return engine_;
}

Transformer* Transformer::GetAlly() const
{
    std::cout << "Transformer::GetAlly called" << std::endl;
    return ally_;
}

void Transformer::SetName(const std::string& name)
{
    std::cout << "Transformer::SetName called" << std::endl;
    name_ = name;
}

void Transformer::SetLevel(unsigned int level)
{
    std::cout << "Transformer::SetLevel called" << std::endl;
    level_ = level;
}

void Transformer::SetStrength(unsigned int strength)
{
    std::cout << "Transformer::SetStrength called" << std::endl;
    strength_ = strength;
}

void Transformer::SetRange(unsigned int range)
{
    std::cout << "Transformer::SetRange called" << std::endl;
    range_ = range;
}

void Transformer::SetAmmo(unsigned int ammo)
{
    std::cout << "Transformer::SetAmmo called" << std::endl;
    ammo_ = ammo;
}

void Transformer::SetEnginePower(int power)
{
    std::cout << "Transformer::SetEnginePower called" << std::endl;
    engine_.SetPower(power);
}

void Transformer::SetAlly(Transformer* ally)
{
    std::cout << "Transformer::SetAlly called" << std::endl;
    ally_ = ally;
}

bool Transformer::Move()
{
    std::cout << "Transformer::Move called" << std::endl;
    return true;
}

bool Transformer::Fire()
{
    std::cout << "Transformer::Fire called" << std::endl;
    if (ammo_ > 0) ammo_--;
    return true;
}

bool Transformer::Transform()
{
    std::cout << "Transformer::Transform called" << std::endl;
    return true;
}

void Transformer::TakeDamage(unsigned int damage)
{
    std::cout << "Transformer::TakeDamage called" << std::endl;
    if (damage >= strength_) strength_ = 0;
    else strength_ -= damage;
}

bool Transformer::IsAlive() const
{
    std::cout << "Transformer::IsAlive called" << std::endl;
    return strength_ > 0;
}

std::ostream& operator<<(std::ostream& os, const Transformer& t)
{
    os << t.ToString();
    return os;
}
