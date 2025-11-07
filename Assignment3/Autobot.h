/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name = "Optimus", unsigned int level = 5);
    ~Autobot();

    std::string getFaction() const;
    void setFaction(const std::string& faction);

    unsigned int getMorale() const;
    void setMorale(unsigned int morale);

    bool defend();
    bool callForHelp();

private:
    std::string _faction;
    unsigned int _morale;
};

#endif // AUTOBOT_H
