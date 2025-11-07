/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name = "Megatron", unsigned int level = 5);
    ~Decepticon();

    std::string getFaction() const;
    void setFaction(const std::string& faction);

    unsigned int getAggression() const;
    void setAggression(unsigned int aggression);

    bool attack();
    bool sabotage();

private:
    std::string _faction;
    unsigned int _aggression;
};

#endif // DECEPTICON_H
