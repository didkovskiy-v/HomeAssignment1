/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

class Engine {
public:
    Engine(const std::string& type = "Standard");
    ~Engine();

    std::string getType() const;
    void setType(const std::string& type);

private:
    std::string _type;
};

class Transformer {
public:
    Transformer(const std::string& name = "Unknown", unsigned int level = 1);
    virtual ~Transformer();
    std::string getName() const;
    void setName(const std::string& name);

    unsigned int getLevel() const;
    void setLevel(unsigned int level);

    unsigned int getStrength() const;
    void setStrength(unsigned int strength);

    unsigned int getFuel() const;
    void setFuel(unsigned int fuel);

    bool move();
    bool transform();
    bool fire();

    void setAlly(Transformer* ally);
    Transformer* getAlly() const;

protected:
    std::string _name;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;

    Engine _engine;
    Transformer* _ally;

private:
    void internalCheck();
};

#endif // TRANSFORMER_H
