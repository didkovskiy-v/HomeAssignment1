/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Engine.h"

class Transformer
{
protected:
    std::string name_;
    unsigned int level_;
    unsigned int strength_;
    unsigned int range_;
    unsigned int ammo_;
    Engine engine_;
    Transformer* ally_;

public:
    Transformer();
    Transformer(const std::string& name, unsigned int level, unsigned int strength,
                unsigned int range, unsigned int ammo, int engine_power = 100);
    virtual ~Transformer() = default;

    virtual std::string GetType() const = 0;

    std::string GetName() const;
    unsigned int GetLevel() const;
    unsigned int GetStrength() const;
    unsigned int GetRange() const;
    unsigned int GetAmmo() const;
    const Engine& GetEngine() const;
    Transformer* GetAlly() const;

    void SetName(const std::string& name);
    void SetLevel(unsigned int level);
    void SetStrength(unsigned int strength);
    void SetRange(unsigned int range);
    void SetAmmo(unsigned int ammo);
    void SetEnginePower(int power);
    void SetAlly(Transformer* ally);

    virtual bool Move();
    virtual bool Fire();
    virtual bool Transform();

    void TakeDamage(unsigned int damage);
    bool IsAlive() const;

    virtual std::string ToString() const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);
};

std::ostream& operator<<(std::ostream& os, const Transformer& t);

#endif
