/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "Transformer.h"

class Neutral : public Transformer {
public:
    Neutral(const std::string& name = "Bumblebee", unsigned int level = 3);
    ~Neutral();

    std::string getRole() const;
    void setRole(const std::string& role);

    unsigned int getNeutrality() const;
    void setNeutrality(unsigned int neutrality);

    bool mediate();
    bool observe();

private:
    std::string _role;
    unsigned int _neutrality;
};

#endif // NEUTRAL_H
